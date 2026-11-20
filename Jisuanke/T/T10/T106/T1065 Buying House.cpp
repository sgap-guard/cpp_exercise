#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    double price = 200.0;
    bool ok = false;

    for (int i = 1; i <= 20; i++)
    {
        double save = 1.0 * N * i;
        if (save >= price)
        {
            cout << i << endl;
            ok = true;
            break;
        }
        price *= (1 + K / 100.0);
    }

    if (!ok)
    {
        cout << "Impossible" << endl;
    }

    return 0;
}