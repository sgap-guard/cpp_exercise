#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;//定义一个整数sum，用于存储1到n的和，初始值为0
    for(int i = 1;i <= n;i++)//for循环，从1到n
    {
        for(int j = 1;j <= i;j++)//for循环，从1到i
        {
            sum += j;//将j加到sum中
        }
    }
    cout << sum << endl;//输出sum
    return 0;
}