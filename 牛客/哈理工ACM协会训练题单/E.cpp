#include<iostream>
using namespace std;
bool have5(int x)//判断x是否包含5
{
    while (x > 0)//判断x是否包含5
    {
        int d = x % 10;//取x的个位数
        if(d == 5)//如果个位数为5
            return true;//返回true，表示x包含5
        else//否则个位数不为5，继续判断下一位
        x = x / 10;//将x除以10，去掉个位数
    }
    return false;//如果x中没有5，返回false
}
int main()
{
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++)//遍历1到n的所有整数
    {
        if(i %3 == 0 && have5(i))//如果i是3的倍数且包含5
        {
            cout << i << endl;// 输出i
        }
    }
    return 0;
}