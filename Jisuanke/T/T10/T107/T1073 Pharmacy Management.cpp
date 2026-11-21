#include <bits/stdc++.h>
using namespace std;

static int a[105];
int main()
{
    int m, n; cin >> m >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int fail = 0;
    for (int i = 0; i < n; i++)
    {
        if (m >= a[i]) m -= a[i];
        else fail++;
    }
    cout << fail << endl;
    return 0;
}