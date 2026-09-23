#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)//输入第n天
    {
        int peach = 1;//第n天有1个桃子
        for(int i = 1; i < n; i++)//for循环，从第1天到第n-1天，每次都有2*(第n天桃子数+1)个桃子
        {
            peach = (peach + 1) * 2;//第n-1天有2*(第n天桃子数+1)个桃子
        }
        cout << peach << endl;//输出第n天的桃子数
    }
    return 0;
}
//第n天有1个桃子，第n-1天有2*(第n天桃子数+1)个桃子，以此类推，第1天有2*(第2天桃子数+1)个桃子
//所以第n天的桃子数就是2^(n-1)
//最后，我们需要使用while循环来读取多组输入，直到输入结束。
