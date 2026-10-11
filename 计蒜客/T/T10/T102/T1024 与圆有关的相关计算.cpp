#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159

signed main()
{
    double r;
    static double D,S,C;
    cin >> r;
    D = 2 * r;
    S = PI * r * r;
    C = 2 * PI * r;
    cout << fixed << setprecision(4) << D << " " << C << " " << S << endl;
    return 0;
}