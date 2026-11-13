#include <bits/stdc++.h>
using namespace std;

static int a[1005], b[1005];
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i] * b[i];
    }
    cout << sum << endl;
    return 0;
}