#include <bits/stdc++.h>
using namespace std;

static int a[10];
signed main()
{
    for (int i = 1; i <= 6; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 7);
    for (int i = 1; i <= 6; i++)
    {
        if (i == 6) cout << a[i];
        else cout << a[i] << " ";
    }
    return 0;
}