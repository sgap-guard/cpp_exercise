#include <bits/stdc++.h>
using namespace std;

signed main()
{
    cout << "2604090112 刘佳林" << endl;
    int n, sum = 0; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a; cin >> a;
        sum += a;
    }
    double avg = 1.0 * sum / n;
    cout << "average = " << fixed << setprecision(1) << avg << endl;
    return 0;
}