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
    string s;
    cin >> s;
    int k = s.size();
    vector<int>a(k+1,0);
    for(int i=0; i<k; i++){
        a[i+1] = a[i] + (s[i]=='a');
    }
    tc{
        int n, m, cnt=0;
        cin >> n >> m;
        cout << a[m]-a[n-1] << nl;
    }
}
int main() {
    fast;
    Raynox();
    return 0;
}