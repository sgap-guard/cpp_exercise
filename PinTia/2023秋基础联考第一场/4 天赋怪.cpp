#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a,b,c; cin >> a >> b >> c;
    if ((a + b + c < 1000) && (a % 12 == 0) && ((a - b) > (b - c)))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}