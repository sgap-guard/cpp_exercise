#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a; 
    while (cin >> a)
    {
        if (a == 200)
            cout << "OK" << endl;
        else if (a == 202)
            cout << "Accepted" << endl;
        else if (a == 400)
            cout << "Bad Request" << endl;
        else if (a == 403)
            cout << "Forbidden" << endl;
        else if (a == 404)
            cout << "Not Found" << endl;
        else if (a == 500)
            cout << "Internal Server Error" << endl;
        else if (a == 502)
            cout << "Bad Gateway" << endl;
    }
    return 0;
}