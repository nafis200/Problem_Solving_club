#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int ans = 1;
        for(int i = 1; i <= n; i++){
             ans = (ans * i) % 10;
             ans = ans % 10;
        }
        cout << ans << "\n";
    }
}