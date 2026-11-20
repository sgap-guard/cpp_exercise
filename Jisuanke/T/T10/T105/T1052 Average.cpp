#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    double sum = 0, avg;
    for (int i = 1; i <= n; i++)
    {
        double a; cin >> a;
        sum += a;
    }
    avg = sum / n;
    cout << fixed << setprecision(4) << avg << endl;
    return 0;
}