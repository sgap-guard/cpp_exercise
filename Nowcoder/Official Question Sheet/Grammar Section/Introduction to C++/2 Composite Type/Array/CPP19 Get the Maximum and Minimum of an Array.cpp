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
    cout << a[1] << " " << a[6] << endl;
    return 0;
}