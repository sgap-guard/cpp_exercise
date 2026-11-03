#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, cnt1 = 0, cnt2 = 0; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        if (x > 0) cnt1++;
        else if (x < 0) cnt2++;
    }
    cout << "positive: " << cnt1 << endl;
    cout << "negative: " << cnt2 << endl;
    return 0;
}
