#include <bits/stdc++.h>
using namespace std;

static int a[20];
signed main()
{
    int i = 0;
    do
    {
        cin >> a[i];
        i++;
    } while (a[i] != -1);
    sort(a, a + i);
    int MAX = a[i - 1];
    int MIN = a[0];
    cout << "max=" << MAX << ",";
    cout << "min=" << MIN << endl;
    return 0;
}