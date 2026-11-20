#include <bits/stdc++.h>
using namespace std;

const int maxn = 3*1e6 +10;
int n, a[maxn], ans[maxn];
stack<int> st;

signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        while (!st.empty() && a[st.top()] < a[i])
        {
            ans[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}