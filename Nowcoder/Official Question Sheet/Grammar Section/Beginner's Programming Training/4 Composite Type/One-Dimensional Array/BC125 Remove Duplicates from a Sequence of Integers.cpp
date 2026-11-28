#include <bits/stdc++.h>
using namespace std;

static bool vis[5005];
int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if (!vis[x])
        // 如果 x 没有出现过，标记为已出现，并输出 x
        {
            vis[x] = true;
            cout << x << " ";
        }
    }
    cout << endl;
    return 0;
}