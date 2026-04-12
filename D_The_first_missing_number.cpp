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
    int n, m;
    cin >> n >> m;
    set<int>a;
    rep(0,n) {
        int x;
        cin >> x;
        a.insert(x);
    }
    for(int i=-m; i<+m; i++){
        if(a.count(i)==0) {
            cout << i << nl;
            break;
        }
    }
}
int main() {
    fast;
    Raynox();
    return 0;
}