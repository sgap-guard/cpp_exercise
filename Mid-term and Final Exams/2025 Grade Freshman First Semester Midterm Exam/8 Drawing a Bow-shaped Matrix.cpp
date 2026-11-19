#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    if (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int num;
                if (i % 2 == 0)
                {
                    num = i * n + j + 1;
                }
                else
                {
                    num = i * n + (n - j);
                }
                cout << setw(5) << num;
            }
            cout << endl;
        }
    }
    return 0;
}