#include <bits/stdC++.h>
using namespace std;

vector<int> a; // 初始为空

signed main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        a.push_back(val); // 动态添加输入的数
    }
    int x; cin >> x;
    a.push_back(x); // 添加新数
    sort(a.begin(), a.end()); // 排序
    for (int i = 0; i < n + 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}