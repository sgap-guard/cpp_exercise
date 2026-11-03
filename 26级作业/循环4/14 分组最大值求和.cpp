#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int m; cin >> m;
    int sum = 0, val;
    for (int i = 1; i * 4 <= m; i++)
    {
        int g_max = -1;
        for (int j = 1; j <= 4; j++)
        {
            cin >> val;
            g_max = max(g_max, val);
        }
        sum += g_max;
    }
    cout << sum << endl;
    return 0;
}