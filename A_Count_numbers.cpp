#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define pb push_back
#define al(x) (x).begin(), (x).end()
#define all(x) (x).rbegin(), (x).rend()
#define vec vector<ll>a(n)
#define ve vector<int>a(n)
#define tc ll t; cin >> t; while(t--)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl '\n'
void Raynox(){
    int n, q;
    cin >> n >> q;
    vector<int>a(n+1,0);
    while(q--){
        int k;
        cin >> k;
        if(k == 1){
            int m;
            cin >> m;
            a[m]+=1;
        }
        else {
            int m;
            cin >> m;
            cout << a[m] << nl;
        }
    }
}
int main() {
    fast;
    Raynox();
    return 0;
}