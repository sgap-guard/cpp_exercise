#include <bits/stdc++.h>
using namespace std;

static int a[105];
signed main()
{
    int n; cin >> n;
    int last = (n % 2 == 0) ? (n - 1) : (n - 2);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 1)
        {
            cout << a[i];
            if (i != last)
            {
                cout << ",";
            }
            else
            {
                cout << endl;
            }
        }
    }
    return 0;
}