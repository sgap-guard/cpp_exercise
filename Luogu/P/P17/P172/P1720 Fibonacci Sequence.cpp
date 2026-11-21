#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    double a = (1 + sqrt(5.0)) / 2, b = (1 - sqrt(5.0)) / 2;
    double ans = (pow(a, n) - pow(b, n)) / sqrt(5.0);
    cout << fixed << setprecision(2) << ans << endl;
    return 0;
}