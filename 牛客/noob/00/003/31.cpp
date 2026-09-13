#include<iostream>
using namespace std;
bool isPrime(int n)//定义bool类型isPrime来判断n是否是素数
//需要单独拿出来，不能放进main函数中
    {
        if(n <= 1) return false;
        if(n == 2) return true;
        if(n %2 == 0)return false;
        for(int j = 3;j * j <= n;j += 2)
        {
        if(n % j == 0)
        return false;
        }
        return true;
    }
int main()
{
    int T,n;
    cin >> T;
    for(int i = 1;i <= T;i++)
    {
    cin >> n;
    if(isPrime(n))
    cout << "Yes\n";
    else
    cout << "No\n";
    }
    return 0;
}
//本题非常重要
