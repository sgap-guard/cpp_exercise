#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    char cur_char = 'A';
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << cur_char << " ";
            cur_char++;
        }
        cout << endl;
    }
    return 0;
}