#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int n, s1 = 0, s2 = 0; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i %2 == 0)
        {
            s2 += i;
        }
        else
        {
            s1 += i;
        }
    }
    cout << s2 << " " << s1 << endl;
    return 0;
}