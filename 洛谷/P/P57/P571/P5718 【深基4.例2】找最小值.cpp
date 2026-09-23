#include<iostream>
using namespace std;
int main()

{
    int n;
    cin >> n;
    int min_v = 1000000;//初始化最小值为1000000，而不是0，因为题目保证0<=a_i<=1000，保证初始化最小值大于所有a_i
    for(int i = 1;i <= n;i++)//用while循环遍历n个整数，从1开始，因为题目保证n>=1。
    {
        int x;
        cin >> x;
        if (x < min_v)//如果当前整数小于最小值，那么就更新最小值
        {
            min_v = x;//更新最小值为当前整数
        }
    }
    cout << min_v << endl;//输出最小值
    
}