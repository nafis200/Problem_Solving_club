#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        if (i % 2)
        {
            cout << s << "\n";
        }
    }
}