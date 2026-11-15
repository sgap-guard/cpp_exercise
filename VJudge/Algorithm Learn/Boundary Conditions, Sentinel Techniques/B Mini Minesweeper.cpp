#include <bits/stdc++.h>
using namespace std;

static int a[10005], b[10005];

signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    b[0] = 0;
    for (int b1 = 0; b1 <= 1; b1++)
    {
        for (int b2 = 0; b2 <= 1; b2++)
        {
            b[1] = b1; b[2] = b2;
            bool val = true;
            for (int i = 1; i < n; i++)
            {
                b[i + 1] = a[i] - b[i - 1] - b[i];
                if (b[i + 1] != 0 && b[i + 1] != 1)
                {
                    val = false;
                    break;
                }
            }
            if (val)
            {
                if (a[n] == b[n] + b[n - 1])
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}