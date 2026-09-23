#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;//输入n，n是1到n的和的项数
    double sum = 0.0;//定义一个double类型的sum，用于存储1到n的和，初始值为0.0
    for(int i = 1;i <= n;i++)//for循环，从1到n
    {
        double Hn = 1.0 / i;//计算当前项的值
        sum += Hn;//将当前项的值加到sum中
    }
    cout << fixed << setprecision(6) << sum << endl;//输出sum，保留6位小数
    return 0;
}
