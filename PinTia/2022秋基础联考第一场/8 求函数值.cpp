#include <bits/stdc++.h>
using namespace std;

double a3,a2,a1,a0;
double f(double x)
{
    return a3 * x * x * x + a2 * x * x + a1 * x + a0;
}

signed main()
{
    double a,b;
    cin >> a3 >> a2 >> a1 >> a0;
    cin >> a >> b;
    while (b - a >= 0.001)
    {
        double mid = (a + b) / 2.0;
        if (f(mid) == 0)
        {
            break;
        }
        if (f(a) * f(mid) < 0)
        {
            b = mid;
        }
        else
        {
            a = mid;
        }
    }
    cout << fixed << setprecision(2) << (a + b) / 2.0 << endl;
    return 0;
}