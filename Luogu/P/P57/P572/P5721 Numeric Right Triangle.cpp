#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin >> n;
    int cnt = 1;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(2) << setfill('0') << cnt++;
        }
        cout << endl;
    }
    return 0;
}