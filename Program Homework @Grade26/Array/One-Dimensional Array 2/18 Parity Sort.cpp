#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> odd, even;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if (x %2 != 0) 
        {
            odd.push_back(x);
        }
        else
        {
            even.push_back(x);
        }
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    for (int x : odd)
    {
        cout << x << endl;
    }
    for (int x : even)
    {
        cout << x << endl;
    }
    return 0;
}