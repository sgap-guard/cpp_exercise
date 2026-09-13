#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    cout << fixed << setprecision(4) << 1.0 * a / b << endl;
    //输出a/b的4位小数
    //fixed表示固定小数点位置，setprecision(4)表示保留4位小数
    //1.0 * a / b表示将a/b转换为浮点数，否则会输出整数
    //保证误差量级在10^-(-4)以下
    return 0;
}