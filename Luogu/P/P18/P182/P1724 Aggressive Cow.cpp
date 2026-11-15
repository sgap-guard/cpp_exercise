#include <bits/stdc++.h>
using namespace std;

bool check(int d, int n, int m, const vector<int>& x)
{
    int cnt = 1;
    int last = x[0];
    for (int i = 1; i < n; ++i)
    {
        if (x[i] - last >= d)
        {
            cnt++;
            last = x[i];
            if (cnt >= m)
            {
                return true;
            }
        }
    }
    return cnt >= m;
}

signed main()
{
    int n, m; cin >> n >> m;
    vector<int> x(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int low = 0, high = x[n - 1] - x[0];
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid == 0)
        {
            low = 1;
            continue;
        }
        if (check(mid, n, m, x))
        {
            ans = mid; low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}