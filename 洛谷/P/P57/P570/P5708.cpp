#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c,p,S;
    cin >> a >> b >> c;
    p = (a+b+c)/2;//p表示半周长，取整操作得到半周长
    S = sqrt(p*(p-a)*(p-b)*(p-c)); //海伦公式
    cout << fixed << setprecision(1) << S << endl;
    return 0;
}