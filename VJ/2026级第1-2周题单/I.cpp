#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x;
    double y;
    cin >> x;//输入x的值
    //分段函数，根据输入x的值所在的范围来计算y的值
    if (x >= 0 && x < 5)
    {y = -x +2.5;}
    else if(x >= 5 && x < 10)
    {y = 2 - 1.5 * (x-3)*(x-3);}
    else if(x >= 10 && x < 20)
    {y = x / 2 - 1.5;}
    cout << fixed << setprecision(3) << y << endl;
    return 0;
}