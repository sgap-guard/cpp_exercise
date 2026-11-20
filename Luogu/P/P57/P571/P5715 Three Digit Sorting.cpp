#include <bits/stdc++.h>
using namespace std;

static int a[5];
signed main()
{
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    sort(a, a + 3);
    cout << a[0] << " " << a[1] << " " << a[2] << endl;
    return 0;
}