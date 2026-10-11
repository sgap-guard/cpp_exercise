#include <bits/stdc++.h>
using namespace std;
#define PI 3.14

signed main()
{
    double r;
    cin >> r;
    static double V = (4.0 / 3.0) * PI * r * r * r;
    cout << fixed << setprecision(2) << V << endl;
    return 0;
}
