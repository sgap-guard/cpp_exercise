#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int target; cin >> target;
    vector<int> result;
    for (int x : nums)
    {
        if (x != target)
        {
            result.push_back(x);
        }
    }
    for (size_t i = 0; i < result.size(); i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << result[i];
    }
    cout << endl;
    return 0;
}