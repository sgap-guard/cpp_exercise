#include <bits/stdc++.h>
using namespace std;
#define int long long

int has7(int x)
{
    int cnt = 0, tmp = x;
    if (tmp == 0)
    {
        return 0;
    }
    while (tmp > 0)
    {
        if (tmp % 10 == 7)
        {
            cnt++;
        }
        tmp /= 10;
    }
    return cnt;
}

signed main()
{
    int n; cin >> n;
    int ans;
    for (int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        ans = has7(x);
        cout << ans << endl;
    }
    return 0;
}