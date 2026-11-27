#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        // 上半部分：星号数 1 → n+1
        for (int i = 1; i <= n + 1; i++)
        {
            for (int k = 0; k < n - i + 1; k++) 
                cout << " ";
            for (int j = 0; j < i; j++)
                cout << "* ";
            cout << endl;
        }
        // 下半部分：星号数 n → 1
        for (int i = n; i >= 1; i--)
        {
            for (int k = 0; k < n - i + 1; k++)
                cout << " ";
            for (int j = 0; j < i; j++) 
                cout << "* ";
            cout << endl;
        }
    }
    return 0;
}