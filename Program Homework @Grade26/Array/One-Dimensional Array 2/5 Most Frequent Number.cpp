#include <bits/stdc++.h>
using namespace std;
static int cnt[1005];
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        cnt[x]++;
    }
    int max_num = 0, max_cnt = 0;
    for (int i = 0; i <= 1000; i++)
    {
        if (cnt[i] > max_cnt)
        {
            max_cnt = cnt[i];
            max_num = i;
        }
    }
    cout << max_num << " " << max_cnt << endl;
    return 0;
}