#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, h, m;
    while (cin >> n >> h >> m)
    {
        int drunk = (m + h - 1) / h;
        int ans = n - drunk;
        cout << ans << endl;
    }
    return 0;
}