#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    if (cin >> n)
    {
        long long batch = (n + 12) / 12;
        long long ans = (batch - 1) * 4 + 2;
        cout << ans << endl;
    }
    return 0;
}