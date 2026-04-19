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
    vector<pair<pair<int,string>, pair<int,pair<int,pair<int,int>>>>>a;
    rep(0,n){
        string name;
        int v, s, d, e;
        cin >> name >> v >> s >> d >> e;
        int total = v+s+d+e;
        a.pb({{-total, name}, {v, {s, {d, e}}}});
    }
    sort(al(a));
    for(auto x : a){
    cout << x.first.second << " " << -x.first.first << " " << x.second.first << " "
         << x.second.second.first << " " << x.second.second.second.first << " "
         << x.second.second.second.second << endl;
    }
}
int main() {
    fast;
    Raynox();
    return 0;
}