#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;//定义一个整数sum，用于存储1到n的和，初始值为0
    for(int i = 1;i <= n;i++)//for循环，从1到n
    {
        if(i % 2 == 1)//如果i是奇数
        sum += i;//将i加到sum中
        else//如果i是偶数
        sum -= i;//将i减去sum中
    }
    cout << sum << endl;//输出sum
    return 0;
}