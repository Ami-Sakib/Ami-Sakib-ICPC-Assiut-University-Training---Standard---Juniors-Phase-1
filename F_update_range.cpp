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
    ll n,m;
    cin >> n >> m;
    vector<ll>a(n+1);
    for(ll i=1;i<=n;i++) cin >> a[i];
    vector<ll>b(n+2);
    while(m--){
        ll l,r,v;
        cin >> l >> r >>v;
        b[l]+=v;
        b[r+1]-=v;
    }
    for(ll i=1;i<=n;i++){
        b[i]+=b[i-1];
    }
    for(ll i=1;i<=n;i++){
        a[i]+=b[i];
    }
    for(ll i=1;i<=n;i++) cout << a[i] << " ";
    cout << nl;

}
int main() {
    fast;
    Raynox();
    return 0;
}