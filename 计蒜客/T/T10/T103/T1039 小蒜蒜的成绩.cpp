#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int a, b; cin >> a >> b;
    int cnt = 0;
    if (a < 60) cnt++;
    if (b < 60) cnt++;
    if (cnt == 1) 
        cout << 1 << endl;
    else 
        cout << 0 << endl;
    return 0;
}