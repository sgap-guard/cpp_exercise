#include<iostream>
using namespace std;
int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        if (m < 100 || n > 999 || m > n)
        {
            cout << "Invalid Value." << endl;
            continue;
        }
        bool has = false; 
        for (int x = m; x <= n; x++)
        {
            int bai = x / 100;
            int shi = x % 100 / 10;
            int ge = x % 10;
            int sum = bai*bai*bai + shi*shi*shi + ge*ge*ge;

            if (sum == x)
            {
                cout << x << endl;
                has = true;
            }
        }
    }
    return 0;
}