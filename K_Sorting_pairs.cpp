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
    int n;
    cin >> n;
    vector<pair<ll,string>>a;
    for(int i=0; i<n; i++){
        string name;
        ll salary;
        cin >> name >> salary;
        a.pb({-salary,name});
    }
    sort(al(a));
    for(auto & x : a) cout << x.second << " " << -x.first << nl;
}
int main() {
    fast;
    Raynox();
    return 0;
}