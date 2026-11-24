// vector 模拟栈
// #include <bits/stdc++.h>
// using namespace std;
//
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n; cin >> n;
//     vector<int> a(n + 1); // 初始化长度为n+1
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }
//     // vector模拟栈
//     vector<int> ans(n + 1, 0); // 初始化长度为n+1，所有元素设为0
//     vector<int> st; // 初始长度为0，根据需要自动扩容
//     st.reserve(n);
//     for (int i = 1; i <= n; i++)
//     {
//         while (!st.empty() && a[i] > a[st.back()])
//         // 当栈不为空且新元素大于栈顶元素时，弹出栈顶元素
//         // st.empty判断栈是否为空
//         // st.back()返回栈顶元素的索引，a[st.back()]是栈顶元素的值
//         {
//             ans[st.back()] = i;
//             st.pop_back();
//             // pop_back()用于删除vector的最后一个元素，相当于出栈操作
//         }
//         st.push_back(i);
//         // push_back()用于在vector的末尾添加一个元素，相当于入栈操作
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         cout << ans[i] << (i == n ? "" : " ");
//          // 消除末尾的空格，避免输出格式错误
//     }
//     cout << endl;
//     return 0;
// }

// 栈是一种先进后出（LIFO）的数据结构，常用于解决一些需要回溯或逆序处理的问题。
// 在本题中，我们使用单调栈来找到每个元素右侧第一个比它大的元素的索引。

// 单调栈是栈的一种特殊应用。它要求栈内的元素必须保持单调递增或单调递减
// 当新元素要入栈时，如果破坏了单调性，就会不断弹出栈顶元素，直到满足单调性为止

// 纯stack
#include <bits/stdc++.h>
using namespace std;

static int a[3000010], ans[3000010];
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    stack<int> st;
    for (int i = n; i >= 1; i--)  // 从右往左
    {
        while (!st.empty() && a[st.top()] <= a[i]) st.pop();
        ans[i] = st.empty() ? 0 : st.top();
        st.push(i);
    }

    for (int i = 1; i <= n; i++) cout << ans[i] << (i == n ? "" : " ");
    cout << endl;
    return 0;
}