#include <iostream>
#include <iomanip>//用于设置输出精度
#include <cmath>//包含数学库，用于计算平方根和幂

using namespace std;
int main()
{
    int Xa, Ya;
    int Xb, Yb;
    cin >> Xa >> Ya;//输入点A的坐标
    cin >> Xb >> Yb;//输入点B的坐标
    cout << fixed << setprecision(3) << sqrt( pow(Xa - Xb,2) + pow(Ya - Yb,2)) << endl;
    //输出距离，用fixed设置输出为定点数，setprecision(3)设置输出精度为3位小数。
    //如果没有fixed，输出结果会自动四舍五入，不需要手动设置精度
    //如果没有setprecision(3)，输出结果会自动四舍五入，不需要手动设置精度
    //pow用于计算幂，pow(Xa - Xb,2)表示计算(Xa - Xb)的平方
    //sqrt用于计算平方根，sqrt(a)表示计算a的平方根；cbrt(a)表示计算a的立方根
    return 0;
}