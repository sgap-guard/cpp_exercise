## 二维数组
### 1 杨辉三角
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[12];
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a[i] = 1;
        for (int j = i - 1; j >= 2; j--)
        {
            a[j] += a[j - 1];
        }
        a[1] = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << setw(4) << a[j];
        }
        cout << endl;
    }
}
```
### 2 图像模糊处理
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int img[105][105];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> img[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int val;
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
            {
                val = img[i][j];
            }
            else
            {
                int sum = img[i][j] + img[i-1][j] + img[i+1][j] 
                        + img[i][j-1] + img[i][j+1];
                val = (int)round(sum / 5.0);
            }
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
```
