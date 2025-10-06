#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a[27]={0};
    for(auto it : s){
        a[it - 97] = 1;
    }

    int idx = -1;

    for(int i = 0; i < 26; i++){
        if(a[i] == 0){
            idx = i;
            break;
        }
    }
    if(idx == -1){
        cout << "None\n";
    }
    else{
        cout << char('a' + idx) << "\n";
    }
    

}
