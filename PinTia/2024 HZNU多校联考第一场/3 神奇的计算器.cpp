#include <iostream>
using namespace std;

signed main()
{
    int a,b;
    cin >> a >> b;
    char x;
    cin >> x;

    if (x == '+')
    {
        cout << a + b;
    }
    else if (x == '-')
    {
        cout << a - b;
    }
    else if (x == '*')
    {
        cout << a * b;
    }
    else if (x == '/')
    {
        if (b == 0)
        {
            cout << "NaN";
            return 0;
        }
        else
        {
            cout << a / b;
        }
    }
    else
    {
        cout << "Invalid operator";
    }
    cout << endl;
    return 0;
}
