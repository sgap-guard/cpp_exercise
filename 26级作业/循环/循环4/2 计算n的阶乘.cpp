#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    cout << ans << endl;
    return 0;
}