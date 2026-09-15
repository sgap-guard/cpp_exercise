#include<iostream>
#include<cmath>
#define PI 3.1415926
using namespace std;
int main()
{
    double x;
    cin >> x;
    double y = log(x * x + 3.0) + PI / 2.0 *cos(40 / 180 * PI);
    //输出结果，log表示自然对数，cos表示余弦函数，PI表示圆周率，40度转换为弧度为40/180*PI
    cout << y << endl;
    return 0;
}