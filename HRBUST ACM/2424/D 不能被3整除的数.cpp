#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        bool first = true;
        // 标记：是不是第一个要输出的数字
        for (int i = a; i <= b; i++)
        {
            if (i % 3 != 0)
            {
                if (first)
                {
                    cout << i;
                    // 第一个数：直接输出数字，前面不加空格
                    first = false;
                    // 标记改为false，代表后面不是第一个数了
                }
                else
                {
                    cout << " " << i;
                    // 不是第一个：先输出空格，再输出数字
                }
            }
        }
        cout << endl;
        // 这一组全部输出完，最后统一换行
    }
    return 0;
}