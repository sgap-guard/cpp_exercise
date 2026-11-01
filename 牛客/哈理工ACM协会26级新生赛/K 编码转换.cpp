#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    for (int i = 1; i <= t; i++)
    {
        unsigned long long a, b; cin >> a >> b;
        unsigned long long ans = a / 2 + b / 2;
        if (a %2 == 1 && b %2 == 1) ans++;
        cout << ans << endl;
    }
    return 0;
}