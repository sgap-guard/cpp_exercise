#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    double sum = 0.0;
    int den = 0, sign = 1;
    for (int i = 1; i <= n; i++)
    {
        den += sign * (2 * i - 1);
        sum += 1.0 / den;
        sign = -sign;
    }   
    cout << fixed << setprecision(3) << sum << endl;
    return 0;
}