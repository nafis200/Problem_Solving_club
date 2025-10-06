#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin >> n;
    vector<ll>v(n);
    for(ll i = 0; i < n; i++){
         cin >> v[i];
    }
    ll ans = 0;
    for(ll i = 1; i < n; i++){
        if(v[i] < v[i - 1]){
            ans = ans + abs(v[i] - v[i - 1]);
            v[i] = v[i - 1];
        }
    }
    cout << ans << "\n";
}