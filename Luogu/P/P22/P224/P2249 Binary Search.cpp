#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    bool firstOutput = true;
    for (int i = 0; i < m; ++i)
    {
        long long q; cin >> q;
        auto it = lower_bound(a.begin(), a.end(), q);
        int ans = -1;
        if (it != a.end() && *it == q)
        {
            ans = (it - a.begin()) + 1;
        }
        if (!firstOutput)
        {
            cout << ' ';
        }
        cout << ans;
        firstOutput = false;
    }
    cout << '\n';
    return 0;
}