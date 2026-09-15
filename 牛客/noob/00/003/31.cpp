#include<iostream>
using namespace std;
bool isPrime(int n)//定义bool类型isPrime来判断n是否是素数
//需要单独拿出来，不能放进main函数中
    {
        if(n <= 1) return false;//如果n小于等于1，返回false
        if(n == 2) return true;//如果n等于2，返回true
        if(n %2 == 0)return false;//如果n是偶数，返回false
        for(int j = 3;j * j <= n;j += 2)//从3开始，每次增加2，因为偶数已经排除了
        {
        if(n % j == 0)//如果n能被j整除
        return false;
        }
        return true;
    }
int main()
{
    int T,n;
    cin >> T;
    for(int i = 1;i <= T;i++)//遍历T个测试用例
    {
    cin >> n;//输入n，判断n是否是素数
    if(isPrime(n))//如果n是素数
    cout << "Yes\n";//输出Yes
    else
    cout << "No\n";//输出No
    }
    return 0;
}
//本题非常重要
