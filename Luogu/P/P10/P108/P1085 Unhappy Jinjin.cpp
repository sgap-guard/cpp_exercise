#include <bits/stdc++.h>
using namespace std;

int main()
{
    int maxTime = 8;
    int day = 0;
    for (int i = 1; i <= 7; i++)
    {
        int a, b;
        cin >> a >> b;
        int sum = a + b;
        if (sum > maxTime)
        {
            maxTime = sum;
            day = i;
        }
    }
    
    cout << day << endl;
    return 0;
}