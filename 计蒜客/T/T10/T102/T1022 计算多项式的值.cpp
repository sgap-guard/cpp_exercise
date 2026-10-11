#include <bits/stdc++.h>
using namespace std;

signed main()
{
    double x,a,b,c,d;
    cin >> x >> a >> b >> c >> d;
    static double fx = a * x * x * x + b * x * x + c * x + d;
    cout << fixed << setprecision(7) << fx << endl;
    return 0;
}