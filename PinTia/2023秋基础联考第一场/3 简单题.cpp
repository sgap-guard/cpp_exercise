#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, w = 0; cin >> n;
    if (n <= 1)
    {
        w = 0;
    }
    else if (n <= 5)
    {
        w = 8 * n;
    }
    else
    {
        w = 40;
        int p = 8;
        for (int i = 6; i <= n; i++)
        {
            p++;
            w += p;
        }
    }
    if (w > 300)
    {
        w = 300;
    }
    cout << w << endl;
    return 0;
}