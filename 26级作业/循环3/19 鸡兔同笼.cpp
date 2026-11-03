#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, m; cin >> n >> m;
    int chicken = 0;
    bool found = false;
    for (int i = 0; i <= n; i++)
    {
        int rabbit = n - i;
        int tot_feet = i * 2 + rabbit * 4;
        if (tot_feet == m)
        {
            chicken = i;
            found = true;
            break;
        }
    }
    if (found)
        cout << chicken << " " << n - chicken << endl;
    else
        cout << "No answer!" << endl;
    return 0;
}
