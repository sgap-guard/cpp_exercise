#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a, b; char op;
    cin >> a >> b >> op;
    if (op == '/')
    {
        if (b == 0)
        {
            cout << "Divided by zero!" << endl;
        }
        else
        {
            cout << a / b << endl;
        }
    }
    else if (op == '+')
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
    else
    {
        cout << "Invalid operator!" << endl;
    }
    return 0;
}
