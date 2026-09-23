#include<iostream>
#include<string>
using namespace std;
bool has4(int n)
{
    return to_string(n).find('4') != string::npos;
    //如果n中包含4，返回true，否则返回false
}
int main()
{
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++)//for循环，从1到n
    {
        if(!has4(i) && i % 4 != 0)
        //如果i中不包含4，且i不是4的倍数
        cout << i << endl;
    }
    return 0;
}