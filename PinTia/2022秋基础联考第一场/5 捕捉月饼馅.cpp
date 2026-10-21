#include <bits/stdc++.h>
using namespace std;

signed main()
{
    char color; cin >> color;
    long long a,b,c,d,e; cin >> a >> b >> c >> d >> e;
    int product_mod = a % 10;
    product_mod = (product_mod * (b % 10)) % 10;
    product_mod = (product_mod * (c % 10)) % 10;
    product_mod = (product_mod * (d % 10)) % 10;
    int target_mod = e % 10;
    if (color == 'p' && product_mod == target_mod)
    {
        cout << "hihihi,yaquyuebing,hihihi " << product_mod << endl;
    }
    else
    {
        cout << "meidechi,555 " << product_mod << endl;
    }
    return 0;
}