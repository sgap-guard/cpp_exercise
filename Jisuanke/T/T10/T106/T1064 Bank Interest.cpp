#include <bits/stdc++.h>
using namespace std;

int main()
{
    int R, M, Y;
    cin >> R >> M >> Y;

    double ans = M;
    for (int i = 0; i < Y; i++)
    {
        ans *= (1 + R / 100.0);
    }

    cout << (int)ans << endl;
    return 0;
}