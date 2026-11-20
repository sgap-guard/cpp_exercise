#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int k; cin >> k;
    int cnt1 = 0, cnt5 = 0, cnt10 = 0;
    for (int i = 1; i <= k; i++)
    {
        int x; cin >> x;
        if (x == 1) cnt1++;
        if (x == 5) cnt5++;
        if (x == 10) cnt10++;
    }
    cout << cnt1 << endl
         << cnt5 << endl
         << cnt10 << endl;
    return 0;
}