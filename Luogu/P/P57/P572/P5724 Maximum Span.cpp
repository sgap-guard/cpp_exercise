#include <bits/stdc++.h>
using namespace std;

static int a[1005];
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    cout << a[n] - a[1] << endl;
    return 0;
}