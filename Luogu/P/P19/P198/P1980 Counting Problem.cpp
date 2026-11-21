#include <bits/stdc++.h>
using namespace std;

int countNum(int num, int x)
{
    int cnt = 0;
    while (num > 0)
    {
        if (num % 10 == x) cnt++;
        num /= 10;
    }
    return cnt;
}

signed main()
{
    int n, x;
    cin >> n >> x;
    int ans = 0;
    for (int i = 1; i <= n; i++) 
    {
        ans += countNum(i, x);
    }
    cout << ans << endl;
    return 0;
}