#include <bits/stdc++.h>
using namespace std;

static long long a[10005];
signed main()
{
    int n; cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            sum += a[i];
        }
    }
    cout << sum << endl;
    return 0;
}