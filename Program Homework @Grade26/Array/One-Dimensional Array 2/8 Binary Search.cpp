#include <bits/stdc++.h>
using namespace std;

static int a[105];
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int v; cin >> v;
    int l = 1, r = n;
    int find = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == v)
        {
            cout << mid << endl;
            find = 1;
            break;
        }
        else if (a[mid] < v)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (!find)
    {
        cout << "Value not found." << endl;
    }
    return 0;
}