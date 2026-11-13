#include <bits/stdc++.h>
using namespace std;

static int f[15];

signed main()
{
    int m; cin >> m;
    f[1] = 1, f[2] = m;
    for (int i = 3; i <= 10; i++)
    {
        f[i] = f[i - 1] * 2 + f[i - 2];
    }
    cout << f[10] << endl;
    return 0;
}