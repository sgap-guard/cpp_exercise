#include <bits/stdc++.h>
using namespace std;

int digitSum(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{
    int n; cin >> n;
    int count = 0;
    for (int i = 1; i < 1000; i++)
    {
        if (digitSum(i) == n)
        {
            cout << setw(8) << i;
            count++;

            if (count % 6 == 0)
            {
                cout << endl;
            }
        }
    }
    if (count % 6 != 0)
    {
        cout << endl;
    }
    return 0;
}