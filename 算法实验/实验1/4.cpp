#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int cnt = 0; double a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    if (a >= 300) cnt++;
    if (b >= 30) cnt++;
    if (c >= 1) cnt++;
    if (d >= 10) cnt++;
    if (e >= 80.0) cnt++;
    if (cnt >= 3) 
    {
        cout << "祝贺你!" << endl;
    }
    else
    {
        cout << "很抱歉!" << endl;
    }
    return 0;
}