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
    for (int i = n; i >= 1; i--)  // ╢ссрмЫвС
    {
        while (!st.empty() && a[st.top()] <= a[i]) st.pop();
        ans[i] = st.empty() ? 0 : st.top();
        st.push(i);
    }
    
    for (int i = 1; i <= n; i++) cout << ans[i] << (i == n ? "" : " ");
    cout << endl;
    return 0;
}