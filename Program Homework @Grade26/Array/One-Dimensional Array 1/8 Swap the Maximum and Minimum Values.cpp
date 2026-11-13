#include <bits/stdc++.h>
using namespace std;

static int a[105];
signed main()
{
    int n;  cin >> n;
    int MAX_val = -1, MAX_pos = 0;
    int MIN_val = 1e9, MIN_pos = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > MAX_val)
        {
            MAX_val = a[i];
            MAX_pos = i;
        }
        if (a[i] < MIN_val)
        {
            MIN_val = a[i];
            MIN_pos = i;
        }
    }
    swap(a[1], a[MIN_pos]);
    if (MAX_pos == 1) 
    {
        MAX_pos = MIN_pos; 
    }
    swap(a[n], a[MAX_pos]);
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}