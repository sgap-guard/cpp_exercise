#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[1005], b[1005], c[2005];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    int i = 0, j = 0, k = 0;
    // 双下标比较，小的先放进结果数组
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
            c[k++] = a[i++];
            // 先把a[i]赋给出c[k]，然后k和i都增加1
        else
            c[k++] = b[j++];
    }
    // 剩余部分直接接上
    while (i < n) c[k++] = a[i++];
    while (j < m) c[k++] = b[j++];

    for (int t = 0; t < k; t++)
    {
        cout << c[t];
        if (t < k - 1) cout << " ";
    }
    cout << endl;
    return 0;
}