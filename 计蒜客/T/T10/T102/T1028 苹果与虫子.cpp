#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n,x,y;
    cin >> n >> x >> y;
    if (x == 0)
    {
        cout << n << endl;
        return 0;
    }
    static int eaten = (y + x -1) / x;
    static int remain = n - eaten;
    cout << remain << endl;
}