#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    int a[100005];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    cout << a[n] - a[1] << endl;
    return 0;
}