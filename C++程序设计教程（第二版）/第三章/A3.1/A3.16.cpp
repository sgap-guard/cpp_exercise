#include<iostream>
using namespace std;

int main()
{
    int m,max;
    cout << "Input a number: " << endl;
    cin >> m;
    max = m;
    while(cin >> m,m != 0)
    {
        if(m > max)
        {
            max = m;
        }
    }
    cout << "The max number is " << max << endl;
    return 0;
}

//本题用while循环实现表示最大值的程序
//输入0时结束循环，输出最大值
//实际上，max函数也可以实现这个功能
//但是，为了练习while循环，所以用while循环实现
//max(a,b)函数可以实现表示两个数最大值的功能,max({a,b,c,...}) 可以实现表示n个数中最大值的功能
//调用max函数需要在头文件中包含<algorithm>