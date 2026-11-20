#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, t, s;
    cin >> m >> t >> s;
    
    if (t == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    
    int eaten = (s + t - 1) / t;
    int remain = m - eaten;
    cout << max(0, remain) << endl;
    
    return 0;
}