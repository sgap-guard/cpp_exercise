#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long k;//定义一个整数k，用于存储n的MB数
    k = n * 1024 * 1024 /4;//计算n的字节数
    cout<<k<<endl;//输出k
    return 0;
}