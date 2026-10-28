#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--) 
    {
        int n; cin >> n;
        for (int i = 1; i <= n; ++i) 
        {
            int val;
            if (i == 1) val = 2;
            else if (i == 2) val = 1;
            else if (i == 3) val = 4;
            else 
            {
                val = (i % 2 == 0) ? 1 : 4;
            }
            if (i == n && n >= 3) 
            {
                if (n % 2 == 1 && n > 3) 
                {
                    val = 2;
                }
            }
            cout << val << ' ';
        }
        cout << endl;
    }
    return 0;
}