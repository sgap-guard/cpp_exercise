#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int baseT, baseOk;
    cin >> baseT >> baseOk;
    double x = 1.0 * baseOk / baseT;
    for (int i = 1; i < n; i++)
    {
        int t, ok;
        cin >> t >> ok;
        double y = 1.0 * ok / t;
        if (y - x > 0.05)
        {
            cout << "better" << endl;
        }
        else if (x - y > 0.05)
        {
            cout << "worse" << endl;
        }
        else
        {
            cout << "same" << endl;
        }
    }
    return 0;
}