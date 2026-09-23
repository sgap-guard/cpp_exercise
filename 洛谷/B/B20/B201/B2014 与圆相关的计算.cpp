#include<iostream>
#include<iomanip>
using namespace std;
#define pi 3.14159
int main()
{
    double r;
    cin >> r;
    double S = pi * r * r;
    double D = 2 * r;
    double C = 2 * pi * r;
    cout << fixed << setprecision(4) << D << " " << C << " " << S << endl;
    return 0;
}