#include <bits/stdc++.h>
using namespace std;

bool has9(int n)
{
    while (n)
    {
        if (n % 10 == 9) return true;
        n /= 10;
    }
    return false;
}

signed main()
{
    int cnt = 0;
    for (int i = 1; i <= 2019; i++)
    {
        if (has9(i)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}