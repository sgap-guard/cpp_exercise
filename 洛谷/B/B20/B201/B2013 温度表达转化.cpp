#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double C,F;
    cin >> F;
    C = 5 * (F - 32) /9;//华氏温度转换为摄氏温度
    cout << fixed << setprecision(5) <<  C << endl;//输出摄氏温度，保留5位小数
    return 0;
}