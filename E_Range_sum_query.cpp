#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define pb push_back
#define al(x) (x).begin(), (x).end()
#define all(x) (x).rbegin(), (x).rend()
#define rep(i,a,n) for(int i=(a); i<(n); i++)
#define tc ll t; cin >> t; while(t--)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ii if
#define o for
void Raynox(){
    ll n,m;
    cin >> n >> m;
    ll a[n+1];
    for(ll i=1;i<=n;i++){
        cin >> a[i];
    }
    ll ps[n+1];
    ps[0]=0;
    for(ll i = 1;i<=n;i++){
        ps[i]=ps[i-1]+a[i];
    }
    while(m--){
        ll l,r;
        cin >> l >> r;
        ll ans = ps[r]-ps[l-1];
        cout << ans << endl;
    }
}
int main() {
    fast;
    Raynox();
    return 0;
}