#include <bits/stdc++.h>
using namespace std;

static long long a[15];
signed main()
{
    for (int i = 1; i <= 10; i++)
    {
        cin >> a[i];
    }
    int pos = 0, neg = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (a[i] > 0) 
            pos++;
        else if (a[i] < 0) 
            neg++;
    }
    cout << "positive:" << pos << endl;
    cout << "negative:" << neg << endl;
    return 0;
}