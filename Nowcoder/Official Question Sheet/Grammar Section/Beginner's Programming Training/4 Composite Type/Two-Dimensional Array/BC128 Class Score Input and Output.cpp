#include <bits/stdc++.h>
using namespace std;

static double a[10], b[10], c[10], d[10], e[10], sum[10];
signed main()
{
    for (int i = 1; i <= 5; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i];
        sum[i] = a[i] + b[i] + c[i] + d[i] + e[i];
    }
    for (int i = 1; i <= 5; i++)
    {
        cout << fixed << setprecision(1) << a[i] << " " << b[i] << " " << c[i] << " " << d[i] << " " << e[i] << " " << sum[i] << endl;
    }
    return 0;
}