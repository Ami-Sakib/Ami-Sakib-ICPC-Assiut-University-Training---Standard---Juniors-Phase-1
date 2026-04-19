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
    vector<ll>a(n);
    for(ll &x : a) cin >> x;
    while(m--){
        string s;
        cin >> s;
        if(s=="pop_back") a.pop_back();
        else if(s=="front") cout << a.front() << endl;
        else if(s=="back") cout << a.back() << endl;
        else if(s=="sort"){
            int l,r;
            cin >> l >> r;
            sort(a.begin()+l-1,a.begin()+r);
        }
         else if(s=="reverse"){
            int l,r;
            cin >> l >> r;
            reverse(a.begin()+l-1,a.begin()+r);
        }
        else if(s=="print"){
            int pos;
            cin >> pos;
            cout << a[pos-1] << endl;
        }
        else if(s=="push_back"){
            ll k;
            cin >> k;
            a.push_back(k);
        }
    }
}
int main() {
    fast;
    Raynox();
    return 0;
}