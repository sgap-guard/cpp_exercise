## Reference Answers
### 1
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[105][105];
signed main()
{
    int m, n; cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int x, y; cin >> x >> y;
    cout << a[x - 1][y - 1] << endl;
    return 0;
}
```
### 2
```cpp
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
```
### 3
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[105][105];
signed main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
```
### 4
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[105][105];
signed main()
{
    int m, n; cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                cnt++;
            }
        }
    }
    int sum = m * n;
    if (cnt * 2 > sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
```
### 5
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[105][105];
signed main()
{
    int m, n; cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] >= 0)
            {
                sum += a[i][j];
            }
        }
    }
    cout << sum << endl;
    return 0;
}
```
### 6
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
### 7
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[55][55];
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
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i][j] != 0)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}
```
### 8
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
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
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                a[i][j] += 6;
            }
            cout << setw(3) << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
```
### 9
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n; cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < n; j++)
    {
        int mx = a[0][j];
        for (int i = 1; i < m; i++)
        {
            if (a[i][j] > mx)
            {
                mx = a[i][j];
            }
        }
        if (j > 0) cout << ' ';
        cout << mx;
    }
    cout << endl;
    return 0;
}
```
### 10
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n; cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n));
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[j][i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        int mx = a[i][0];
        for (int j = 1; j < n; j++)
        {
            if (a[i][j] > mx)
            {
                mx = a[i][j];
            }
        }
        cout << mx << endl;
    }
    return 0;
}
```
### 11
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a[55][55];
    int m, n; cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            if (i > 0) cout << ' ';
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
```
### 12
```cpp

```
### 13
```cpp

```
### 14
```cpp

```
### 15
```cpp

```
### 16
```cpp

```
### 17
```cpp

```
### 18
```cpp

```
### 19
```cpp

```
### 20
```cpp

```