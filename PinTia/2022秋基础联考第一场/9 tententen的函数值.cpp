#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n,k; cin >> n >> k;
    long long cnt0 = n / k;
    long long ans = cnt0 * cnt0 * cnt0;
    if (k % 2 == 0)
    {
        int half = k / 2;
        long long cnth = (n - half) / k + 1;
        ans += cnth * cnth * cnth;
    }
    cout << ans << endl;
    return 0;
}