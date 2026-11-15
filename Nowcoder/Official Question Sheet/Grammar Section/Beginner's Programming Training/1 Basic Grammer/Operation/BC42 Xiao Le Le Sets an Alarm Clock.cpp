#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, m, k; char colon;
    while (cin >> h >> colon >> m >> k)
    {
        int total = (h * 60 + m + k) % 1440;
        int nh = total / 60;
        int nm = total % 60;
        cout << setfill('0') << setw(2) << nh << ':'
             << setfill('0') << setw(2) << nm << '\n';
    }
    return 0;
}