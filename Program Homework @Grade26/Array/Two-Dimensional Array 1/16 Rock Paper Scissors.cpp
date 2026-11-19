#include <bits/stdc++.h>
using namespace std;

static int a[105], b[105];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, na, nb; cin >> n >> na >> nb;

    for (int i = 0; i < na; i++) cin >> a[i];
    for (int i = 0; i < nb; i++) cin >> b[i];

    int cntA = 0, cntB = 0;
    for (int i = 0; i < n; i++)
    {
        int x = a[i % na];
        int y = b[i % nb];

        if ((x == 0 && y == 2) || (x == 2 && y == 5) || (x == 5 && y == 0))
        {
            cntA++;
        }
        else if ((y == 0 && x == 2) || (y == 2 && x == 5) || (y == 5 && x == 0))
        {
            cntB++;
        }
    }

    if (cntA > cntB) cout << "A" << endl;
    else if (cntB > cntA) cout << "B" << endl;
    else cout << "draw" << endl;
    return 0;
}