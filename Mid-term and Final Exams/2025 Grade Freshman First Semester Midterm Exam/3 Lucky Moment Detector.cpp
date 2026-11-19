#include <bits/stdc++.h>
using namespace std;
signed main()
{
    cout << "input" << endl;
    int a; cin >> a;
    if (a %5 == 0 && a %7 != 0)
        cout << "Unlucky!" << endl;
    else if (a %7 == 0)
        cout << "Lucky bird!" << endl;
    return 0;
}