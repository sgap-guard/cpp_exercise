#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        sum = a + b + c + d;
        cout << sum << endl;
    }
    return 0;
}