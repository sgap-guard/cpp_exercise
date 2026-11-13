#include <bits/stdc++.h>
using namespace std;

int get_unique_count(int a[], int n)
{
    sort(a, a + n);
    return unique(a, a + n) - a;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[1005];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << get_unique_count(a, n) << endl;
    return 0;
}