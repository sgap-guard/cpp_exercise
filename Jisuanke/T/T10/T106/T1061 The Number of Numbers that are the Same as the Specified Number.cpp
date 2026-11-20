#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, m; cin >> n >> m;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        if (x == m) cnt++;
    }
    cout << cnt << endl;
    return 0;
}