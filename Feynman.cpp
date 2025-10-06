#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        int ans = 0;
        for (int k = 1; k <= n; k++)
        {
            ans = ans + (n - k + 1) * (n - k + 1);
        }
        cout << ans << "\n";
    }
}