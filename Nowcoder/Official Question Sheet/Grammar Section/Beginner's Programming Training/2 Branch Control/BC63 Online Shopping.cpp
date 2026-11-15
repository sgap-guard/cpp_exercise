#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double val; int month, day, coupon;
    cin >> val >> month >> day >> coupon;
    double price = val;
    if (month == 11 && day == 11)
    {
        price *= 0.7;
    } 
    else if (month == 12 && day == 12)
    {
        price *= 0.8;
    }
    if (coupon == 1)
    {
        price -= 50;
    }
    if (price < 0) price = 0;
    cout << fixed << setprecision(2) << price << '\n';
    return 0;
}