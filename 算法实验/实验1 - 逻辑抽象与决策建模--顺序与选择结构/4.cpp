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
        cout << "×£ºØÄã!" << endl;
    }
    else
    {
        cout << "ºÜ±§Ç¸!" << endl;
    }
    return 0;
}