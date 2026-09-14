#include <iostream>
#include<iomanip>
using namespace std;

int main() 
{
    long c,d;
    cin >> c >> d;
    double w = double(d) / c;//计算d占c的比例，转换为百分比
    cout << w * 100 << "%" << endl;//输出d占c的比例，保留2位小数
    return 0;
}