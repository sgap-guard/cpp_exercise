#include <bits/stdc++.h>
using namespace std;

static int a[1005];
signed main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << a[n - 1] - a[0] << endl;
    return 0;
}