#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d,x1,x2;
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if(d < 0)
    {
        cout << "方程无实根" << endl;
    }
    else
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << "x2 = " << x2 << endl;
    }
    return 0;
}