#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int pack[3], price[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> pack[i] >> price[i];
    }
    int minCost = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        int num = (n + pack[i] - 1) / pack[i];
        int cost = num * price[i];
        minCost = min(minCost, cost);
    }
    cout << minCost << endl;
    return 0;
}