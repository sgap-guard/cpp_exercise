#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    int sum = 0;
    do
    {
        cin >> n;
        if (n != 1) break;
        sum += n;
    }
    while (true);
    cout << sum << endl;
    return 0;
}