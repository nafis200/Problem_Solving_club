#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin.ignore();
    for(int i = 1; i <= n; i++){
        getline(cin, s);
    }
    cout << k << "\n";
}