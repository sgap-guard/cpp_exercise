#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= 111; i++)
    {
        long long reminder = n - 11 * i;
        if (reminder < 0)
        {
            break;
        }
        if (reminder % 111 == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO" << endl;
}