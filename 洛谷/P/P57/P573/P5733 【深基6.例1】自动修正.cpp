#include<iostream>
#include<cctype>//cctype是字符类型判断函数的头文件
#include<string>//string是字符串类的头文件
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i = 0;i<s.size();i++)//遍历字符串s的每个字符
    {
        s[i] = toupper((unsigned char)s[i]);//将字符转换为大写字母
    }
    cout << s << endl;
    return 0;
}   
