#include<iostream>
using namespace std;

int main()
{
    int m,n,t,r;
    cout << "Input two numbers m and n: " << endl;
    cin >> m >> n;
    if (m < n)
    {
        t = m;
        m = n;
        n = t;
        //上三行是交换m和n的值，使m大于等于n
    }
    while ((r = m % n) != 0)
    {
        m = n;
        n = r;
        //上两行是计算m和n的公约数
    }
    cout << "The GCD of m and n is " << n << endl;
    return 0;
}

//输入两个正整数m和n，求它们的最大公约数
//本题用while循环实现表示最大公约数的程序
//即辗转相除的欧几里得算法
//最大公约数在C++17中新增了一个函数gcd，可以实现表示两个数的最大公约数的功能
//调用gcd函数需要在头文件中包含<algorithm>
//用法是gcd(a,b)
//其中a和b是两个正整数
//返回值是a和b的最大公约数

