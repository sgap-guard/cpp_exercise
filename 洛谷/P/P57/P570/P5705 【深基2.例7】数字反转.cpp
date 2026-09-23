#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    //字符串翻转,返回值为void,需要用reverse函数调用
    cout<<s<<endl;
    return 0;
}