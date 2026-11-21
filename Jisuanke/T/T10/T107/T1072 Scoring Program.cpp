#include <bits/stdc++.h>
using namespace std;

int calc(int n)
{
    if (n <= 10) return n * 6;
    if (n <= 20) return 60 + (n - 10) * 2;
    if (n <= 40) return 80 + (n - 20);
    return 100;
}

int main()
{
    int n;
    while (cin >> n)
    {
        cout << calc(n) << endl;
    }
    return 0;
}