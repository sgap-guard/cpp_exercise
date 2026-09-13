#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n %4 == 0 && n %100 != 0 || n % 400 == 0)
    //判断是否为闰年 
    //闰年的定义：能被4整除，但不能被100整除，或者能被400整除
    {
        cout << "yes" << endl;
    }
    else 
    {
        cout << "no" << endl;
    }
    return 0;
}