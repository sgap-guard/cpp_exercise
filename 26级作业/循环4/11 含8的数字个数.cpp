#include <iostream>
using namespace std;

bool hasDigit(int a)
{
    int tmp = a;
    if (tmp < 0)
    {
        tmp = -tmp;
    }
    while (tmp != 0)
    {
        int digit = tmp % 10;
        if (digit == 8)
        {
            return true;
        }
        tmp = tmp / 10;
    }
    return false;
}

signed main()
{
    int a, b, cnt = 0; cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (hasDigit(i))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
