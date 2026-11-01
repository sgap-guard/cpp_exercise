#include <bits/stdc++.h>
using namespace std;

bool cmp (int a,int b)
{
    return a > b;
}

static int a[1005],b[1005], MAX[1005];

signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];

        if (a[i] > b[i])
        {
            MAX[i] = a[i];
        }
        else if (a[i] < b[i])
        {
            MAX[i] = b[i];
        }
        else
        {
            return 0;
        }
    }
    sort(MAX + 1, MAX + n + 1,cmp);
    cout << MAX[2] << endl;
    return 0;
}