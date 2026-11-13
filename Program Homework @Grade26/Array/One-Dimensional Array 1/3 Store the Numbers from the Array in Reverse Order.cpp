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
    for (int i = n; i > 1; i--)
    {
        cout << a[i] << " ";
    }
    cout << a[1] << endl;
    return 0;
}