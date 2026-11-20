#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    string order;
    cin >> order;
    for (int i = 0; i < 3; i++)
    {
        if (order[i] == 'A')
            cout << a[0];
        else if (order[i] == 'B')
            cout << a[1];
        else
            cout << a[2];
        if (i < 2) cout << " ";
    }
    cout << endl;
    
    return 0;
}