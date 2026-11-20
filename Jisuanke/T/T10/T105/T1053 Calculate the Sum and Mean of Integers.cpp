#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    int sum = 0;
    double avg;
    for (int i = 1; i <= n; i++)
    {
        int a; cin >> a;
        sum += a;
    }
    avg = 1.0 * sum / n;
    cout << sum << " ";
    cout << fixed << setprecision(5) << avg << endl;
    return 0;
}