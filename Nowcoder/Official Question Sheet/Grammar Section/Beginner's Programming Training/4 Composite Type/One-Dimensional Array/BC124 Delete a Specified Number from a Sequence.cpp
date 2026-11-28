#include <bits/stdc++.h>
using namespace std;

static vector<int> a;
// 定义一个静态的动态数组a，初始值为空
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        a.push_back(x);
        // 在动态数组a添加元素x
    }
    int x; cin >> x;
    // 删除所有等于 x 的元素
    a.erase(remove(a.begin(), a.end(), x), a.end());
    // erase-remove惯用法：先用remove将所有等于x的元素移动到末尾，然后用erase删除这些元素
    for (int i = 0; i < (int)a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}