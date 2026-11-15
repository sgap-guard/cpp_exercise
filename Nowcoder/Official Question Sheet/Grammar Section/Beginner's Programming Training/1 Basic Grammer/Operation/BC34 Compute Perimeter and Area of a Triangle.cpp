#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double C = a + b + c;
    double p = C / 2.0;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << fixed << setprecision(2) << "circumference=" << C << " area=" << S << endl;
    return 0;
}