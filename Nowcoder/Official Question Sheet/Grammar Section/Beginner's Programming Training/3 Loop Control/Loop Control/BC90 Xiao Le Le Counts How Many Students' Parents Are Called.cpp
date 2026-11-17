#include <bits/stdc++.h>
using namespace std;

static int a[1000], b[1000], c[1000];
signed main()
{
    int n, cnt = 0; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        if ((a[i] + b[i] + c[i]) / 3.0 < 60)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}