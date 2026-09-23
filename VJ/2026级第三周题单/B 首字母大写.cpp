#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string s;
    while(getline(cin, s))
    //循环读行，直到输入结束，本题不能用for循环
    {
        bool is_first = true;
        //遍历字符串s，修改每个字符，用bool
        for(char &c : s)
        //遍历字符串s，修改每个字符，用bool is_first记录是否是第一个字符
        {
            if(is_first)
            {
                c = toupper(c);
                is_first = false;
                //如果是第一个字符，修改为大写字母
                //is_first = false，表示不是第一个字符了
            }
            if(c == ' ')
            //如果是空格，is_first = true，表示下一个字符是第一个字符
            {
                is_first = true;
            }
        }
    cout << s << endl;
    return 0;
}