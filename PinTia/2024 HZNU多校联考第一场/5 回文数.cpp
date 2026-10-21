#include <bits/stdc++.h>
using namespace std;

static bool isPal(int num)
{
    string s = to_string(num);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

signed main()
{
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    for(int i = x; i <= y; i++)
    {
        if(isPal(i))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
