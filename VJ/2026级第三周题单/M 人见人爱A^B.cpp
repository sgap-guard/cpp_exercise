#include<iostream>
// 输入输出头文件，cin、cout需要
using namespace std;
// 使用标准命名空间，不用写std::cin std::cout

int main()
{
    int a,b;
    // 定义两个整数，存放底数A，指数B
    while(cin >> a >> b)
    // 循环读取一组a,b，直到读不到输入为止
    {
        if(a == 0 && b == 0) break;
        // 如果a和b同时等于0，结束循环，程序终止
        int res = 1;
        // 保存结果，初始值为1，因为乘法单位元是1
        a = a % 1000;
        // 底数先对1000取模：(a^b)%1000 = ((a%1000)^b)%1000，减小底数
        for(int i = 0; i < b; i++)
        // 循环b次，代表乘b次a
        {
            // res * a 可能int溢出，先强制转为long long计算，再mod1000
            res = (long long)res * a % 1000;
        }
        cout << res << endl;
        // 输出A^B的最后三位
    }
    return 0;
    // 程序正常结束
}
