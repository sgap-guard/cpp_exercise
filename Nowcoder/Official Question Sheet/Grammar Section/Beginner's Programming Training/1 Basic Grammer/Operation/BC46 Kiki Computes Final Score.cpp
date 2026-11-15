#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a, b, c, d; cin >> a >> b >> c >> d;
    double A = a * 0.2;
    double B = b * 0.1;
    double C = c * 0.2;
    double D = d * 0.5;
    double ans = A + B + C + D;
    cout << fixed << setprecision(1) << ans << endl;
    return 0;
}