#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     ll n; cin >> n;
     ll ans = n * (n + 1) / 2;
     ll sum = 0;
     for(int ll i = 1; i < n; i++){
          int x; cin >> x;
          sum += x;
     }

     cout << ans - sum << "\n";
}