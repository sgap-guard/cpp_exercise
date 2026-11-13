#include <bits/stdc++.h>
using namespace std;

static int a[15];
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        cnt++;
        if (cnt %3 != 1)
        {
            cout << " ";
        }
        cout << a[i + 1] - a[i];
        if (cnt %3 == 0)
        {
            cout << endl;
        }
    }
    if (cnt %3 != 0)
    {
        cout << endl;
    }
    return 0;
}