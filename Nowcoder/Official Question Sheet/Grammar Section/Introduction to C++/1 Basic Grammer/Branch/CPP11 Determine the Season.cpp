#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int x; cin >> x;
    if (x == 3 || x == 4 || x == 5)
    {
        cout << "春季" << endl;
    }
    else if (x == 6 || x == 7 || x == 8)
    {
        cout << "夏季" << endl;
    }
    else if (x == 9 || x == 10 || x == 11)
    {
        cout << "秋季" << endl;
    }
    else if (x == 12 || x == 1 || x == 2)
    {
        cout << "冬季" << endl;
    }
    else
    {
        cout << "不合法" << endl;
    }
    return 0;
}