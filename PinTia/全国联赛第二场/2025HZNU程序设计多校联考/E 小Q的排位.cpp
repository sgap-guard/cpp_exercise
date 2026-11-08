#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a, b, n; cin >> n >> a >> b;
    int ans = max(0, n - max(a + 1, n - b) + 1);
    cout << ans << endl;
    return 0;
}