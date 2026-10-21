#include <bits/stdc++.h>
using namespace std;

static void dfs(int pos,int sum,int ans)
{
    int n; cin >> n;
    if (sum > n)
    {
        return;
    }
    if ((sum + 3 * (10 - pos + 1)) < n)
    {
        return;
    }
    if ((sum + 1 * (10 - pos + 1)) > n)
    {
        return;
    }
    if (pos == 11)
    {
        if (sum == n)
        {
            ans++;
        }
        return;
    }
    for (int i = 1; i <= 3; i++)
    {
        dfs(pos + 1, sum + i, ans);
    }
}
