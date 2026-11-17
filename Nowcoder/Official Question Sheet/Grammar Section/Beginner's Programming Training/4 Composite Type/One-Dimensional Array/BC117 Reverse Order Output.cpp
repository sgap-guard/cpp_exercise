#include <bits/stdc++.h>
using namespace std;

static long long a[15];
signed main()
{
    for (int i = 1; i <= 10; i++)
    {
        cin >> a[i];
    }
    reverse(a + 1, a + 11);
    for (int i = 1; i <= 10; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}