#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
long long a[MAXN];
long long sorted_a[MAXN];
long long suffix_sum[MAXN];
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sorted_a[i] = a[i];
    }
    sort(sorted_a + 1, sorted_a + n + 1);
    suffix_sum[n + 1] = 0; 
    for (int i = n; i >= 1; i--)
    {
        suffix_sum[i] = suffix_sum[i + 1] + sorted_a[i];
        // 前缀和
    }
    for (int i = 1; i <= n; i++)
    {
        int pos = upper_bound(sorted_a + 1, sorted_a + n + 1, a[i]) - sorted_a;
        cout << suffix_sum[pos] << " ";
    }
    return 0;
}