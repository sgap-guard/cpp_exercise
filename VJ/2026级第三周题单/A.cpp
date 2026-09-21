#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    //getline(输入流, 字符串变量)
    //读取一整行输入，直到遇到回车换行才停止。
    for (char &c : s)
    {
        if (islower(c))
        {
            if (c == 'z') c = 'a';
            else c++;
        }
        else if (isupper(c))
        {
            if (c == 'Z') c = 'A';
            else c++;
        }
    }
    cout << s << endl;
    return 0;
}

//s：我们刚才读进来的字符串。
//: s 代表遍历字符串s里每一个字符。
//char &c 引用，重点是这个&
//如果写 char c（不带 &）：每次循环拿到的是字符的拷贝，修改c不会改变原字符串s。
//如果写 char &c（带 & 引用）：c就是原字符串里那个字符本身，修改c就直接修改s里面对应的字符。

//islower(c) 判断c是否为小写字母
//isupper(c) 判断c是否为大写字母

//getline(cin, s);：读取完整一行输入到字符串 s，保留空格。
//for (char &c : s)：逐个遍历 s 里的字符，直接修改原字符串中的字符，不需要额外新建字符串。
