#include <bits/stdc++.h>
using namespace std;
static int a[100005], first[200005];
#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            a[i] = -1;
        }
        else
        {
            a[i] = 1;
        }
    }
    for (int i = 0; i <= 2 * n; i++)
    {
        first[i] = -1;
    }
    long long sum = 0, ans = 0;
    first[n] = 0;
    int idx;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i];
        idx = sum + n;
        if (first[idx] == -1)
        {
            first[idx] = i;
        }
        else
        {
            ans = max(ans, i - first[idx]);
        }
    }
    cout << ans << endl;
    return 0;
}