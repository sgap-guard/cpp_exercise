#include <bits/stdc++.h>
using namespace std;

signed main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double dis = 1.0 * sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    cout << fixed << setprecision(2) << dis << endl;
    return 0;
}