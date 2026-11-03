#include <bits/stdc++.h>
using namespace std;
static int a[55], b[55], c[55];
signed main()
{
    int n, sum1 = 0, sum2 = 0, sum3 = 0, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        sum += a[i] + b[i] + c[i];
        sum1 += a[i];
        sum2 += b[i];
        sum3 += c[i];
    }
    cout << sum1 << " " << sum2 << " " << sum3 << " " << sum << endl;
    return 0;
}