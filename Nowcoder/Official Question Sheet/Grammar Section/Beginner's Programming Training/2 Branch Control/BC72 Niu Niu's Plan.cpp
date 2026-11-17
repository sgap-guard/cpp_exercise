#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, m, d; int y1, m1, d1;
    cin >> y >> m >> d; cin >> y1 >> m1 >> d1;
    if (y1 > y)
    {
        cout << "yes" << endl;
    }
    else if (y1 == y)
    {
        if (m1 > m)
        {
            cout << "yes" << endl;
        }
        else if (m1 == m)
        {
            if (d1 >= d)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
        else
        {
            cout << "no" << endl;
        }
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}