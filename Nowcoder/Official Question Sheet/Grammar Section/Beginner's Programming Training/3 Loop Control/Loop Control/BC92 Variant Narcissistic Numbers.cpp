#include <bits/stdc++.h>
using namespace std;

bool isLily(int num)
{
    long long sum = 0;
    sum += (num / 10000LL) * (num % 10000LL);
    sum += (num / 1000LL) * (num % 1000LL);
    sum += (num / 100LL) * (num % 100LL);
    sum += (num / 10LL) * (num % 10LL);
    return sum == num;
}

int main()
{
    bool first = true;
    for (int i = 10000; i <= 99999; i++)
    {
        if (isLily(i))
        {
            if (!first)
            {
                cout << " ";
            }
            cout << i;
            first = false;
        }
    }
    cout << endl;
    return 0;
}