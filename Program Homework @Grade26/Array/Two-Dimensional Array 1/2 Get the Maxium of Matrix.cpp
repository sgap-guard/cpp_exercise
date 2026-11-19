#include <bits/stdc++.h>
using namespace std;

static int a[105][105];
int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int MAX = a[0][0];
    int mi = 1, mj = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > MAX)
            {
                MAX = a[i][j];
                mi = i + 1;
                mj = j + 1;
            }
        }
    }
    cout << MAX << " " << mi << " " << mj << endl;
    return 0;
}