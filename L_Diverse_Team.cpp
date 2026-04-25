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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int,int> used;
    vector<int> ans;
    rep(0,n){
        cin >> a[i];
        if(!used[a[i]]){
            used[a[i]] = 1;
            ans.pb(i + 1);
        }
    }
    if(ans.size() < k){
        no;
    }
    else{
        yes;
        for(int i = 0; i < k; i++){
            cout << ans[i] << " ";
        }
        cout << nl;
    }
}

int main() {
    fast;
    Raynox();
    return 0;
}