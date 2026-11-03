#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    double sum = 0;
    for (int k = 1; k <= n; k++)
    {
        int d = k;
        if (d % 2 == 0)
        {
            d = -k;
        }
        sum += (1.0 / d);
    }
    cout << fixed << setprecision(3) << sum << endl;
    return 0;
}