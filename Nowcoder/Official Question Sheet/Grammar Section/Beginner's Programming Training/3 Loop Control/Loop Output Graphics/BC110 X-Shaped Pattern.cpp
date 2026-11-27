#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                // 主对角线 i == j，副对角线 i + j == n + 1
                if (i == j || i + j == n + 1)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}