#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    bool found = false;
    bool first = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            found = true;
            if (!first)
            {
                cout << " ";
            }
            cout << i;
            first = false;
        }
    }
    if (!found)
    {
        cout << "none.";
    }
    cout << endl;
    return 0;
}