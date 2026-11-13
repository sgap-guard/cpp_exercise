#include <bits/stdc++.h>
using namespace std;

static long long a[105];
signed main()
{
    int n; cin >> n;
    long long sum1 = 0, sum2 = 0;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
        {
            sum1 += a[i];
            cnt1++;
        }
        else if (a[i] < 0)
        {
            sum2 += a[i];
            cnt2++;
        }
    }
    cout << cnt1 << " " << sum1 << endl;
    cout << cnt2 << " " << sum2 << endl;
    return 0;
}