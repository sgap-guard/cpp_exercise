#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long sum= 0;
    for(long long i = 1;i <= n;i++)//for循环，从1到n
    {
        sum += i;//将i加到sum中
    }
    cout<<sum<<endl;//输出sum
       return 0;
}