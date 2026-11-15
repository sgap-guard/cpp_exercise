#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    if (cin >> a >> b)
    {
        int ans = (a % 100 + b % 100) % 100;
        cout << ans << endl;
    }
    return 0;
}