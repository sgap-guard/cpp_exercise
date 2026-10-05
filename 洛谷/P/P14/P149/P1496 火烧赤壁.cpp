#include <bits/stdc++.h>
using namespace std;

static pair<long long, long long> interval[100005];

signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        static int a,b; cin >> a >> b;
        interval[i] = {a,b};
    }
    sort(interval + 1, interval + n + 1);

    static long long L = interval[1].first, R = interval[1].second;
    static long long ans = 0;

    for (int i = 2; i <= n; i++)
    {
        static long long a = interval[i].first, b = interval[i].second;

        if (a > R)
        {
            ans += R - L;
            L = a, R = b;
        }
        else
        {
            if (b > R)
            {
                R = b;
            }
        }
    }
    ans += R - L;
    cout << ans << endl;
    return 0;
}