#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int a, b; cin >> a >> b;
    char op; cin >> op;
    if (op == '+')
    {
        cout << a + b << endl;
    }
    else if (op == '-')
    {
        cout << a - b << endl;
    }
    else if (op == '*')
    {
        cout << a * b << endl;
    }
    else if (op == '/')
    {
        if (b == 0)
        {
            cout << "Divided by zero!" << endl;
            return 0;
        }
        cout << a / b << endl;
    }
    else
    {
        cout << "Invalid operator!" << endl;
    }
    return 0;
}