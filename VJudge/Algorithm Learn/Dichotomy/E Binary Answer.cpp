#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAXN = 100000 + 5;
int N, M;
ll a[MAXN];

bool Check(ll x)
{
    int cnt = 1;
    ll cur = 0;
    for (int i = 1; i <= N; i++)
    {
        if (cur + a[i] <= x)
        {
            cur += a[i];
        }
        else
        {
            cnt++;
            cur = a[i];
        }
    }
    return cnt <= M;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    ll l = 0, r = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> a[i];
        l = max(l, a[i]);
        r += a[i];
    }

    while (l < r)
    {
        ll mid = l + (r - l) / 2;
        if (Check(mid))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << '\n';
    return 0;
}