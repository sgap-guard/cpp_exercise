#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char c1,c2,c3,c4;//分别表示百位数、十位数、个位数、符号位
    int x;//输入的整数
    cin >> x;
    c4 = x >= 0 ? '+' : '-';//判断符号位
    x = abs(x);//将x转换为绝对值
    //将x转换为字符
    c2 = x % 10 + 48;//将个位数转换为字符
    c3 = x %10 + 48;//将十位数转换为字符
    x = x / 10;//将x转换为百位数
    c2 = x % 10 + 48;//将百位数转换为字符
    c1 = x / 10 + 48;//将千位数转换为字符
    cout << "符号 百位数 十位数 个位数" << endl;
    cout << c4 << " " << c1 << " " << c2 << " " << c3 << endl;
    return 0;
}