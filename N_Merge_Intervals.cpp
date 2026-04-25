#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define pb push_back
#define al(x) (x).begin(), (x).end()
#define all(x) (x).rbegin(), (x).rend()
#define ve vector<int>a(n)
#define rep(a,n) for(int i=(a); i<(n); i++)
#define tc ll t; cin >> t; while(t--)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl '\n'

void Raynox(){

    ll n;
    cin >> n;

    vector<pair<ll,ll>> v(n);

    rep(0,n){
        cin >> v[i].first >> v[i].second;
    }

    sort(al(v));

    ll l = v[0].first;
    ll r = v[0].second;

    for(int i = 1; i < n; i++){

        if(v[i].first <= r){
            r = max(r, v[i].second);
        }
        else{
            cout << l << " " << r << nl;
            l = v[i].first;
            r = v[i].second;
        }
    }

    cout << l << " " << r << nl;
}

int main() {
    fast;
    Raynox();
    return 0;
}