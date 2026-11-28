#include <bits/stdc++.h>
using namespace std;

static int a[55];
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1, greater<int>());
    for (int i = 1; i <= 5; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}