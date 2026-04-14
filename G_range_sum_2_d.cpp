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
    int n, m, l;
    cin >> n >> m >> l;
    vector<vector<ll>>a(n+1,vector<ll>(m+1));
    vector<vector<ll>>b(n+1,vector<ll>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            b[i][j]=a[i][j]+b[i-1][j]+b[i][j-1]-b[i-1][j-1];
        }
    }
    while(l--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        ll ans = b[x2][y2]
               - b[x1-1][y2]
               - b[x2][y1-1]
               + b[x1-1][y1-1];
               cout << ans << nl;
    }

}
int main() {
    fast;
    Raynox();
    return 0;
}