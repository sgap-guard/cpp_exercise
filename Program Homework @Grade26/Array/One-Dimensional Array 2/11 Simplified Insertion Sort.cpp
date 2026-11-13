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
    int x; cin >> x;
    int pos = n + 1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > x)
        {
            pos = i;
            break;
        }
    }
    for (int i = n; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = x;
    for (int i = 1; i <= n + 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}