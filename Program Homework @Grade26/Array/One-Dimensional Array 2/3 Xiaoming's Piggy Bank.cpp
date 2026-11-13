#include <bits/stdc++.h>
using namespace std;

static int sum[1005];
signed main()
{
    int n, d; cin >> n >> d;
    for (int day = 1; day <= d; day++)
    {
        int x; cin >> x;
        sum[x] += day;
    }
    for (int i = 0; i < n; i++)
    {
        if (i > 0) cout << " ";
        cout << sum[i];
    }
    cout << endl;
    return 0;
}