#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << string(i - 1, ' ')
             << string(2 * n - 2 * i + 1, '0' + i)
             << endl;
    }
    return 0;
}