#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long N, M;
    cin >> N >> M;
    vector<int> trees(N);
    int max_height = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> trees[i];
        if (trees[i] > max_height)
        {
            max_height = trees[i];
        }
    }
    long long low = 0, high = max_height;
    long long ans = 0;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        long long sum =0;
        for (int i = 0; i < N; i++)
        {
            if (trees[i] > mid)
            {
                sum += trees[i] - mid;
            }
        }
        if (sum >= M)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}