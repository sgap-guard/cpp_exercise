#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[7];
    while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6])
    {
        int sum = 0;
        int mx = a[0], mn = a[0];
        for (int i = 0; i < 7; i++)
        {
            sum += a[i];
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }
        double avg = (sum - mx - mn) / 5.0;
        cout << fixed << setprecision(2) << avg << endl;
    }
    return 0;
}