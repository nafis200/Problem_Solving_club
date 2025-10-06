#include<bits/stdc++.h>
using namespace std;
int main(){
     bool ok = true;
     string s;
     cin >> s;
     for(int i = 1; i <(int) s.size();i++){
          if(s[i] == 's' && s[i] == s[i - 1]){
            ok = false;
          }
     }

     if(ok){
        cout << "no hiss\n";
     }
     else{
        cout << "hiss\n";
     }
}
