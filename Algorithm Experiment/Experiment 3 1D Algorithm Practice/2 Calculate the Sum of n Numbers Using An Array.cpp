#include <bits/stdc++.h>
using namespace std;
static int a[25];
signed main()
{
    cout << "Áõ¼ÑÁÖ 2604090112" << endl;
    int n, sum = 0; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}