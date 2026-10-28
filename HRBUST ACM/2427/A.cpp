#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int T; cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int n,x,y; cin >> n >> x >> y;
        cout << n - x + y << endl;
    }
    return 0;
}