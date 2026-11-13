#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    bool first = true;
    for (int i = 1; i * i <= n; i++)
    {
        if (!first) 
        {
            cout << " ";
        }
        cout << i * i;
        first = false;
    }
    cout << endl;
    return 0;
}