#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a1,a2,n;
    cin >> a1 >> a2 >> n;
    static int d = a2 - a1;
    static int an = a1 + (n - 1) * d;
    cout << an << endl;
    return 0;
}