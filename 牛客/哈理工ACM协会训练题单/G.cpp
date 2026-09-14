#include<iostream>
#include<numeric>//调用此库来使用gcd函数
//使用numeric需要满足C++14标准
using namespace std;
int main()
{
    long long A,B;
    cin >> A >> B;
    cout << gcd(A,B) << endl;//输出A和B的最大公约数
    return 0;
}