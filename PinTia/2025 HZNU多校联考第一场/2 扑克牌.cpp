#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a,b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "A" << endl;
    }
    else if (a < b)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "=" << endl;
    }
    return 0;
}