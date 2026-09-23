#include<iostream>
#include<algorithm>//max,min会用到
using namespace std;
int main()
{
    long long x,y;//x，y为矩形的两边长
    cin >> x >> y;
    long long sum = 0;
    //sum是所有分割出来的正方形的边长之和，最后乘4才是总体力
    long long a = max(x,y);//a为矩形的长
    long long b = min(x,y);//b为矩形的宽
    while(b != 0)//当且仅当b不为0时，继续循环
    {
        long long k;//k为a除以b的商
        k = a / b;//计算a除以b的商
        sum += k * b;//将a除以b的商的b倍数加到sum中
        //计算a除以b的商的倍数
        long long temp = a % b;
        a = b;
        b = temp;
        /*
        17到19行用temp保存a除以b的余数
        然后更新a、b，把当前矩形替换成剩下未分割的小矩形
        循环直到b等于0，累加得到全部正方形的边长总和
        */
    }
    cout << 4 * sum << endl;//输出矩形的周长，因为矩形的周长为4倍的sum
    return 0;
}