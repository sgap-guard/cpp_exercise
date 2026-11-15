#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> evt;
    for(int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        evt.emplace_back(a, 1);
        evt.emplace_back(b + 1, -1);
    }
    sort(evt.begin(), evt.end());
    int cur = 0, ans = 0;
    for(auto &pr : evt)
    {
        cur += pr.second;
        ans = max(ans, cur);
    }
    cout << ans << endl;
    return 0;
}
