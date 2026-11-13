#include <bits/stdc++.h>
using namespace std;

static int a[15];

signed main()
{
    for (int i = 1; i <= 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 10; i > 1; i--)
    {
        cout << a[i] << " ";
    }
    cout << a[1] << endl;
    return 0;
}