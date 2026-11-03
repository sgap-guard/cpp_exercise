#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int n, sum = 0; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int s; cin >> s;
        sum += s;
    }
    double arr = 1.0 * sum / n;
    cout << fixed << setprecision(1) << arr << endl;
    return 0;
}