#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int avg = sum / n;
    long long prefix_sum = 0;
    int moves = 0;
    for (int i = 0; i < n - 1; i++)
    {
        prefix_sum += a[i];
        long long diff = prefix_sum - (long long)(i + 1) * avg;
        if (diff != 0)
        {
            moves++;
        }
    }
    cout << moves << endl;
    return 0;
}