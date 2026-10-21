#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long a, m, p = 0; cin >> a >> m;
    for (long long i = 1; i <= m; i++)
    {
        p++;
        if (p > a)
        {
            p = 0;
        }
    }
    cout << p << endl;
    return 0;
}

// 数学规律做法
// signed main()
// {
//     long long a, m;
//     cin >> a >> m;
//
//     // 最终亮度就是 m 对 (a + 1) 取模
//     long long ans = m % (a + 1);
//
//     cout << ans << endl;
//     return 0;
// }