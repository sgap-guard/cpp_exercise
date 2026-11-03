#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    for (int i = 2; i <= 1000; i++)
    {
        int s = 0;
        for (int j = 1; j < i; j++)
            if (i % j == 0) s += j;
        if (s == i)
        {
            cout << setw(5) << i;
            cnt++;
            if (cnt % 5 == 0) cout << endl;
        }
    }
    if (cnt % 5 != 0) cout << endl;
    cout << setw(5) << cnt << endl;
    return 0;
}