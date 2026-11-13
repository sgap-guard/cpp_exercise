#include <bits/stdc++.h>
using namespace std;

static int a[25];
signed main()
{
    int n, X; cin >> n >> X;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == X)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "Not Found" << endl;
    return 0;
}