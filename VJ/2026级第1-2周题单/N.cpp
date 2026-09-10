#include<iostream>
using namespace std;
int main()
{
    int m, n;
    //多组输入，不断读取m n
    while (cin >> m >> n)
    {
        bool has = false; //标记：是否找到水仙花数
        //x从m遍历到n
        for (int x = m; x <= n; x++)
        {
            int bai = x / 100;
            int shi = x % 100 / 10;
            int ge = x % 10;
            int sum = bai*bai*bai + shi*shi*shi + ge*ge*ge;

            if (sum == x)
            {
                if (has)
                {
                    cout << " "; //不是第一个，先输出空格
                }
                cout << x;
                has = true;
            }
        }
        if (has)
        {
            cout << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
