#include <bits/stdc++.h>
using namespace std;

// 判断是否为水仙花数
bool isNarcissus(int x)
{
    int a = x / 100;
    int b = x / 10 % 10;
    int c = x % 10;
    return a * a * a + b * b * b + c * c * c == x;
}

int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        bool found = false;
        bool first = true;
        
        for (int i = m; i <= n; i++)
        {
            if (isNarcissus(i))
            {
                if (!first)
                {
                    cout << " ";
                }
                cout << i;
                first = false;
                found = true;
            }
        }
        
        if (!found)
        {
            cout << "no";
        }
        cout << endl;
    }
    return 0;
}