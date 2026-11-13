#include <bits/stdc++.h>
using namespace std;
static int a[105];
signed main()
{
    int n, sum = 0; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}