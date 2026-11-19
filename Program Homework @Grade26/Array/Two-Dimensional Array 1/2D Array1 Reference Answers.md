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
#include <bits/stdc++.h>
using namespace std;

int a[55][55];
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

    int x, y; cin >> x >> y;
    for (int j = 0; j < n; j++)   // 逐列交换第 x 行与第 y 行
    {
        swap(a[x][j], a[y][j]);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > 0) cout << ' ';   // 空格在前，不在后
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
```
### 13
```cpp
#include <bits/stdc++.h>
using namespace std;

static int score[205];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q; cin >> n >> q;
    for (int k = 0; k < q; k++)
    {
        int a, b, sa, sb;
        cin >> a >> b >> sa >> sb;
        if (sa > sb)               // a 胜
        {
            score[a] += 3;
            score[b] = score[b] >= 2 ? score[b] - 2 : 0;
        }
        else if (sa < sb)          // b 胜
        {
            score[b] += 3;
            score[a] = score[a] >= 2 ? score[a] - 2 : 0;
        }
        // 平局：双方得 0 分，不加不扣
    }
    int best = 1;
    for (int i = 1; i <= n; i++)
    {
        if (score[i] > score[best])
        {
            best = i;
        }
    }
    cout << best << endl;
    return 0;
}
```
### 14
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a1[305][305], a2[305][305];
int main()
{
    int m, n;
    cin >> m >> n;
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

    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a1[i][j] == a2[i][j])
            {
                cnt++;
            }
        }
    }
    double ans = (double)cnt * 100.0 / ((long long)m * n);
    cout << fixed << setprecision(2) << ans << '%' << endl;
    return 0;
}
```
### 15
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[35][35];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n; cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int k; cin >> k;
    while (k--)
    {
        char op;
        int x, y;
        cin >> op >> x >> y;
        x--; y--;
        if (op == 'r')
        {
            for (int j = 0; j < n; j++)
            {
                swap(a[x][j], a[y][j]);
            }
        }
        else if (op == 'c')
        {
            for (int i = 0; i < m; i++)
            {
                swap(a[i][x], a[i][y]);
            }
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > 0) cout << ' ';
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
```
### 16
```cpp
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
```
### 17
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[10][10], sum[10];
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
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i] += a[i][j];
        }
        cout << sum[i] << endl;
    }
    return 0;
}
```
### 18
```cpp
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
```
### 19
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
### 20
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[4][4], maxx[4], sum[4];
int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i] += a[i][j];
            if (j == 0)
            {
                maxx[i] = a[i][j];
            }
            else
            {
                maxx[i] = max(maxx[i], a[i][j]);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(4) << a[i][j];
        }
        cout << setw(4) << maxx[i] << setw(4) << sum[i] << endl;
    }
    return 0;
}
```