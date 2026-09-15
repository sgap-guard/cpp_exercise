#include<iostream>
#include<iomanip>//格式化输出头文件，本代码中使用了setw和setfill，setprecision三个函数
using namespace std;
int main()
{
    int x = 65;
    double f = 123.456;
    cout << "123456789123456" << endl;
    cout << dec << x << " " << hex << x << " " << oct << x << endl;
    //输出x的十进制、十六进制、八进制表示
    //二进制是binary，但是C++没有提供直接输出二进制的方法，可参考下方代码
    cout << x << ends << x << endl;//输出x的二进制表示
    cout << f << endl;//输出f的默认表示
    cout << setprecision(4) << f << endl;//输出f的保留4位有效数字的表示。
    //setprecision是设置有效数字的函数，参数为保留的有效数字数，返回值为流对象。
    //而fixed+setprecision可以实现保留小数点后几位数的表示。
    cout << setw(12) << f << endl;
    //输出f的宽度为12的表示，不足部分用空格填充。
    cout << setw(12) << setfill('#') << f << endl;
    //输出f的宽度为12的表示，不足部分用#填充。
    //system("pause");
    //暂停程序执行，等待用户按键，以便观察输出结果。
    //但是，在Windows下，system("pause")函数会暂停程序执行，等待用户按键。
    //C++中并没有提供这样的函数，因此注释掉了这一行。
    //因此，用return 0;来结束程序执行。
    return 0;
}