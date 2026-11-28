#include <bits/stdc++.h>
using namespace std;

static vector<int> a;
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        a.push_back(x);
    }
    int tar; cin >> tar;
    int cnt = 0;
    for (int i : a)
    {
        if (i == tar)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}