#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, cnt = 0; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        int ge = x % 10;
        int shi = (x / 10) % 10;
        int bai = (x / 100) % 10;
        int qian = x / 1000;
        if (ge - qian - bai - shi > 0) cnt++;
    }
    cout << cnt << endl;
    return 0;
}