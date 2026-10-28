#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int sum = 0;
    do
    {
        int n; cin >> n;
        if (n == 0) break;
        sum += n;
    }
    while (true);
    cout << sum << endl;
    return 0;
}