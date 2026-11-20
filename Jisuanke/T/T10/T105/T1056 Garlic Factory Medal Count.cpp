#include <bits/stdc++.h>
using namespace std;

static int a[20], b[20], c[20];
signed main()
{
    int n; cin >> n;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        cnt1 += a[i];
        cnt2 += b[i];
        cnt3 += c[i];
    }
    int cnt = cnt1 + cnt2 + cnt3;
    cout << cnt1 << " " << cnt2 << " " << cnt3 << " " << cnt << endl;
    return 0;
}