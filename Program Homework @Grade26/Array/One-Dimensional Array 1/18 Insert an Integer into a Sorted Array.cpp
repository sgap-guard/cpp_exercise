#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        nums.push_back(x);
    }
    int insert_val; cin >> insert_val;
    auto it = lower_bound(nums.begin(), nums.end(), insert_val);
    nums.insert(it, insert_val);
    for (size_t i = 0; i < nums.size(); i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << nums[i];
    }
    cout << endl;
    return 0;
}