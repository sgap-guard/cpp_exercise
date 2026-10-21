#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n,res = 0,num[13]; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];

        if (num[i] % 2 != 0)
        {
            res += num[i];
        }
    }
    cout << res << endl;
    return 0;
}