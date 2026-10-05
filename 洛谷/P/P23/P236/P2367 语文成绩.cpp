#include <bits/stdc++.h>
using namespace std;

static long long d[5000005],a[5000005];

signed main()
{
    int n,p; cin >> n >> p;
    d[0] = 0;
    long long prev = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        d[i] = a[i] - prev;
        prev = a[i];
    }

    for (int k = 1; k <= p; k++)
    {
        int x,y,z; cin >> x >> y >> z;
        d[x] += z;
        d[y + 1] -= z;
    }
    long long current = 0;
    long long MinScore = 1e18;

    for (int i = 1; i <= n; i++)
    {
        current += d[i];
        if (current < MinScore)
        {
            MinScore = current;
        }
    }
    cout << MinScore << endl;
    return 0;
}