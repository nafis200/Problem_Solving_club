#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<string>v;
    string s1;
    for(int i = 0; i < s.size(); i++){
         if(s[i] == '-'){
            v.push_back(s1);
            s1 = "";
         }
         else{
            s1 += s[i];
         }
    }
    v.push_back(s1);

    for(auto it : v){
        cout << it[0];
    }
    
}