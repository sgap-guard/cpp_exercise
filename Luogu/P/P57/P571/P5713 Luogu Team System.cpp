#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int localTime = 5 * n;
    int luoguTime = 11 + 3 * n;
    if (localTime < luoguTime)
    {
        cout << "Local" << endl;
    }
    else
    {
        cout << "Luogu" << endl;
    }
    return 0;
}