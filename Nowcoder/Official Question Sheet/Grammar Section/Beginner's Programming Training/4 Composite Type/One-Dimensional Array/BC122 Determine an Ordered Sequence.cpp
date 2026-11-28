#include <bits/stdc++.h>
using namespace std;

static int a[55];
signed main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    bool inc = true, dec = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1]) inc = false;
        if (a[i] > a[i + 1]) dec = false;
    }
    if (inc || dec) 
    {
        cout << "sorted" << endl;
    }
    else
    {
        cout << "unsorted" << endl;
    }
    return 0;
}
