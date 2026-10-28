#include <bits/stdc++.h>
using namespace std;

int main()
{
    double t; int year;
    double rate, sum;
    cin >> year >> t;
    if (year >= 5)
    {
        rate = 50;
    }
    else
    {
        rate = 30;
    }
    if (t <= 40)
    {
        sum = t * rate;
    }
    else
    {
        sum = 40 * rate + (t - 40) * rate * 1.5;
    }
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}
