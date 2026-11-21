#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a;
    cin >> a;
    int cnt = 1;
    while (a > 1)
    {
        a /= 2;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}