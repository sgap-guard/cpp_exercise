#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n, m; cin >> n >> m;
    int maxh = LLONG_MIN, mr = 1, mc = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            int x; cin >> x;
            if (x > maxh)
            {
                maxh = x;
                mr = i;
                mc = j;
            }
        }
    cout << mr << " " << mc << endl;
    return 0;
}