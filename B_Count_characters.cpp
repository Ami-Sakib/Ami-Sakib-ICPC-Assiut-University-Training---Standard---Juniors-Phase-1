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
    string s;
    cin >> s;
    map<char,int>a;
    for(char c : s) {
        a[c]+=1;
    }
    for(auto x : a) cout << x.first << " " << x.second << nl;
}
int main() {
    fast;
    Raynox();
    return 0;
}