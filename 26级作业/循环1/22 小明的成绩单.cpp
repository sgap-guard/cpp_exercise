#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        if (x >= 0 && x < 60)
        {
            cout << "fail" << endl;
        }
        else if (x >= 60 && x < 80)
        {
            cout << "pass" << endl;
        }
        else if (x >= 80 && x <= 100)
        {
            cout << "excellent" << endl;
        }
        else
        {
            cout << "wa" << endl;
        }
    }
    return 0;
}