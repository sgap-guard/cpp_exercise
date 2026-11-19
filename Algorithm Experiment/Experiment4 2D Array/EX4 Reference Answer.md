## Experiment 4 - 2D Array
### 1
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[12][18];
int main()
{
    int m, n; cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int mx = a[0][0], ri = 0, rj = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > mx)
            {
                mx = a[i][j];
                ri = i;
                rj = j;
            }
        }
    }
    cout << ri << ',' << rj << ',' << mx << endl;
    return 0;
}
```
### 2
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[6][6], minn[4];
signed main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            minn[j] = min(minn[j], a[i][j]);
        }
    }
    for (int j = 0; j < 4; j++)
    {
        cout << minn[j] << " ";
    }
    cout << endl;
    return 0;
}
```
### 3
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[15][15];
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > 0) cout << ' ';
            cout << a[n - 1 - j][i];
        }
        cout << endl;
    }
    return 0;
}
```
### 4
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a1[105][105];
static int a2[105][105];
signed main()
{
    int m, n; cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a1[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a2[i][j];
        }
    }
    bool flag = true;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a1[i][j] != a2[i][j])
            {
                flag = false;
            }
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
```
### 5
```cpp
#include <bits/stdc++.h>
using namespace std;

static int cntM[15];
int main()
{
    int N, M; cin >> N >> M;
    int cntN = 0;
    for (int i = 0; i < N; i++)
    {
        cntM[i] = 0;
        for (int j = 0; j < M; j++)
        {
            int x; cin >> x;
            if (x >= 95)
            {
                cntM[i]++;
            }
        }
        if (cntM[i] >= 2)
        {
            cntN++;
            cout << "student:" << i + 1 << endl;
        }
    }
    if (cntN == 0)
    {
        cout << "None" << endl;
    }
    return 0;
}
```
### 6
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[7][7];
signed main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    int mzx = 0, ri, rj;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i][j] > mzx)
            {
                mzx = a[i][j];
                ri = i; rj = j;
            }
        }
    }
    cout << mzx << " [" << ri << "][" << rj << "]" << endl;
    return 0;
}
```