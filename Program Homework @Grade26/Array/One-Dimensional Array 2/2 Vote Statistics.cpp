#include <bits/stdc++.h>
using namespace std;

static int cnt[6];
signed main()
{
    int n; cin >> n;
    int val = 0, inval = 0;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if (x >= 1 && x <= 5) 
        {
            cnt[x]++;
            val++;
        }
        else
        {
            inval++;
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        if (i > 1)
        {
            cout << " ";
        }
        cout << cnt[i];
    }
    cout << endl;
    cout << val << " " << inval << endl;
    int m_v = 0, winner = 1;
    for (int i = 1; i <= 5; i++)
    {
        if (cnt[i] > m_v)
        {
            m_v = cnt[i];
            winner = i;
        }
    }
    cout << winner << endl;
    return 0;
}