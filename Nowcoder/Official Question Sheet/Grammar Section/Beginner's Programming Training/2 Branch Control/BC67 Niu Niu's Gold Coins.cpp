#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;
    if (y1 > y)
    {
        cout << "u" << endl;
    }
    else if (y1 < y)
    {
        cout << "d" << endl;
    }
    else if (x1 > x)
    {
        cout << "r" << endl;
    }
    else
    {
        cout << "l" << endl;
    }
    return 0;
}