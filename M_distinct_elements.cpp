#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define pb push_back
#define al(x) (x).begin(), (x).end()
#define all(x) (x).rbegin(), (x).rend()
#define ve vector<ll>a(n)
#define rep(a,n) for(int i=(a); i<(n); i++)
#define tc ll t; cin >> t; while(t--)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl '\n'
void Raynox(){
    ll n, q;
    cin >> n >> q;
    ve;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    ll k = a.size();
    while (q--) {
        ll x;
        cin >> x;
        ll kom = lower_bound(a.begin(), a.end(), x) - a.begin();
        ll beshi = k - (upper_bound(a.begin(), a.end(), x) - a.begin());

        cout << kom << " " << beshi << nl;
    }

}
int main() {
    fast;
    Raynox();
    return 0;
}