#include <bits/stdc++.h>
using namespace std;

static int a[10];
int main()
{
    for (int i = 1; i <= 6; i++)
    {
        cin >> a[i];
    }
    cout << "[";
    for (int i = 1; i <= 6; i++)
    {
        if (i == 6) cout << a[i];
        else cout << a[i] << ", ";
    }
    cout << "]" << endl;
    reverse(a + 1, a + 7);
    cout << "[";
    for (int i = 1; i <= 6; i++)
    {
        if (i == 6) cout << a[i];
        else cout << a[i] << ", ";
    }
    cout << "]" << endl;
    return 0;
}