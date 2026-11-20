#include <bits/stdc++.h>
using namespace std;

static int a[12];
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a[i] = 1;
        for (int j = i - 1; j >= 2; j--)
        {
            a[j] += a[j - 1];
        }
        a[1] = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << setw(4) << a[j];
        }
        cout << endl;
    }
}