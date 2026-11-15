#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int dx = x1 - x2;
    int dy = y1 - y2;
    int ans = dx * dx + dy * dy;
    cout << ans << endl;
    return 0;
}