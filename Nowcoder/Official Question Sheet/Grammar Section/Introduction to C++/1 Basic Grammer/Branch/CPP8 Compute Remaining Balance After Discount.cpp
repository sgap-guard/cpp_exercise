#include <bits/stdc++.h>
using namespace std;

signed main()
{
    double price, cost = 0.0;
    cin >> price;
    if (price >= 5000)
        price *= 0.6;
    else if (price >= 2000)
        price *= 0.7;
    else if (price >= 500)
        price *= 0.8;
    else if (price >= 100)
        price *= 0.9;
    cout << fixed << setprecision(1) << price << endl;
    return 0;
}