#include <bits/stdc++.h>
using namespace std;

static int a[25][25];
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
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                sum += a[i][j];
                if (a[i][j] != 0) cnt++;
            }
        }
    }
    cout << "sum = " << sum << ", count = " << cnt << "." << endl;
    return 0;
}