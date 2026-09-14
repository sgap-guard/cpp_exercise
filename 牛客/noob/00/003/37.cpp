#include<iostream>
#include<string>//包含字符串头文件，用于处理字符串
using namespace std;
int main()
{
    string n;//定义一个字符串n，用于存储输入的整数
    //为什么用字符串，因为整数的位数是不确定的，而字符串可以存储任意长度的字符
    cin >> n;
    int sum = 0;
    for(char c : n)//遍历字符串n中的每个字符
    //冒号表示遍历字符串n中的每个字符，将每个字符赋值给变量c
    {
        if (c == '-')//如果字符是负号
        {
            continue;//跳过当前循环，继续下一个字符
        }    
        sum += c - '0';//将当前字符转换为整数，加到sum中，减‘0’是因为字符是字符串，需要转换为整数 
    }
    cout << sum << endl;//输出sum
    return 0;
}