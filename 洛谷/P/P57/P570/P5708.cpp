#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c,p,S;
    cin >> a >> b >> c;
    p = (a+b+c)/2;
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << fixed << setprecision(1) << S << endl;
    return 0;
}