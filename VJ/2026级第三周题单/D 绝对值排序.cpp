#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;

bool cmp(int a,int b)
{
    return abs(a) > abs(b);
}

//用bool定义cmp函数，根据绝对值大小排序，从大到小排序
int main()
{
    int m;
    while(cin >> m && m != 0)
    {
        int a[105];
        //定义数组a，用于存储输入的n个整数
        //105足够用，因为n最大为100
        for(int i = 0;i < m;i++)
        {
        cin >> a[i];
        }
        //输入n个整数，存储到数组a中
        sort(a,a+m,cmp);
        //对数组a进行排序，根据cmp函数排序，从大到小排序
        //排序后，数组a中的元素按绝对值大小从大到小排序
        //sort函数的参数为数组a的首地址和尾地址，cmp函数的地址
        //sort函数的返回值为void，即没有返回值
        for(int i = 0;i < m;i++)
        {
            if(i > 0)
            {
            cout << " ";
            }
            //下面这一行必须放在外面，否则会输出多个空格，导致输出错误，即WA
            cout << a[i];
            //输出数组a中的元素，每个元素之间用空格隔开
            //输出后，换行
            
        }
        cout << endl;
    }
    return 0;
}