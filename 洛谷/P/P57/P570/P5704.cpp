#include<iostream>
#include<cctype>//字符处理库
using namespace std;
int main()
{
    char a;
    cin >> a;
    cout << (char)toupper(a) << endl;
    //toupper函数将字符转换为大写字母,返回值为字符;tolower函数将字符转换为小写字母,返回值为字符
    return 0;
}