#include <bits/stdc++.h>
using namespace std;

static int state[5005];
signed main()
{
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        state[i] = 1;
    }
    for (int k = 1; k <= m; k++)
    {
        for (int i = k; i <= n; i += k)
        {
            if (state[i] == 1)
            {
                state[i] = 0;
            }
            else
            {
                state[i] = 1;
            }
        }
    }
    int first = 1;
    for (int i = 1; i <= n; i++)
    {
        if (state[i] == 0)
        {
            if (!first)
            {
                cout << ",";
            }
            cout << i;
            first = 0;
        }
    }
    cout << endl;
    return 0;
}