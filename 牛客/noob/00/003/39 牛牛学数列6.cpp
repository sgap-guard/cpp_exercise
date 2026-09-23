#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int f[20];
    //为什么用数组，因为n最大为20，所以用数组存储f[i]，避免重复计算
    f[1] = 0;//即f(1) = 0
    f[2] = 1,f[3] = 1; //即f(2) = 1,f(3) = 1
    for(int i = 4;i <= n;i++)//for循环，从4到n
    //for循环，从4到n，计算f[i]的值
    //f[i] = f[i-3] + 2 * f[i-2] + f[i-1]
    {
        f[i] = f[i-3] + 2 * f[i-2] + f[i-1];
    }
    cout << f[n] << endl;//输出f[n]的值
    //为什么输出f[n]的值，因为f(n)的值是f[n]的值，所以要输出f[n]的值
    return 0;
}