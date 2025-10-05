#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int ans = a + b;
    int mx = max(a, b);

    cout << max(ans, 2 * mx - 1);
}