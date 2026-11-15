#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n1, n2; cin >> n1 >> n2;
    double ans = 1.0 / (1.0 / n1 + 1.0 / n2);
    cout << fixed << setprecision(2) << ans << endl;
    return 0;
}