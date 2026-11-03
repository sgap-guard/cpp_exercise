#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a, n;
    while (cin >> n >> a)
    {
        if (a == 0 && n == 0)
        {
            break;
        }
        long long sum = 0, cur = 0;
        for (int i = 1; i <= n; i++)
        {
            cur = cur * 10 + a;
            sum += cur;
        }
        cout << sum << endl;
    }
    return 0;
}