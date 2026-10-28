#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n; long long t;
    if (!(cin >> n >> t)) return;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }
    long long cur_sum = 0;
    int left = 0;
    int max_books = 0;
    for (int right = 0; right < n; ++right) 
    {
        cur_sum += a[right];
        while (cur_sum > t && left <= right) 
        {
            cur_sum -= a[left];
            left++;
        }
        if (cur_sum <= t) 
        {
            max_books = max(max_books, right - left + 1);
        }
    }
    cout << max_books << endl;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T;
    if (cin >> T) 
    {
        while (T--) 
        {
            solve();
        }
    }
    return 0;
}