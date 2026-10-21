#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;

    for(int j = 0; j <= 2 * n; j++)
    {
        if(j % 2 == 0)
            cout << '*';
        else
            cout << ' ';
    }
    cout << endl;

    for(int j = 0; j <= 2 * n + 2; j++)
    {
        if(j % 2 == 0)
            cout << '*';
        else
            cout << ' ';
    }
    cout << endl;

    for(int j = 0; j < 2 * n; j++)
    {
        if(j % 2 == 1)
            cout << '*';
        else
            cout << ' ';
    }
    cout << endl;

    return 0;
}
