#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0) return false;
    }
    return true;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int prime_count = 0;

    string bitmask(k, 1);
    bitmask.resize(n, 0);

    do
    {
        int current_sum = 0;
        for (int i = 0; i < n; ++i)
        {
            if (bitmask[i]) current_sum += nums[i];
        }

        if (is_prime(current_sum))
        {
            prime_count++;
        }
    }
    while (prev_permutation(bitmask.begin(), bitmask.end()));

    cout << prime_count << '\n';
    return 0;
}