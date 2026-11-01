#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, cnt = 0; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        if (x < 60) cnt++;
    }
    cout << cnt * 200 << endl;
    return 0;
}