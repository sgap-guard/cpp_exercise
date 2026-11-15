#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n; cin >> x >> n;
    int ans = (x + n) % 7;
    if (ans == 0) ans = 7;
    cout << ans << endl;
    return 0;
}