#include <bits/stdc++.h>
using namespace std;

static int a[15];
signed main()
{
    int n; cin >> n;
    if (n > 10 || n < 1)
    {
        cout << "Invalid." << endl;
        return 0;
    }
    double avg = 0; int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    avg = 1.0 * sum / n;
    cout << fixed << setprecision(2) << avg << endl;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > avg)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}