#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int w[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char m[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    bool allPassed = true;
    while (n--)
    {
        string id; cin >> id;
        bool ok = true;
        for (int i = 0; i < 17; i++)
        {
            if (!isdigit((unsigned char)id[i]))
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            int sum = 0;
            for (int i = 0; i < 17; i++)
            {
                sum += (id[i] - '0') * w[i];
            }
            int z = sum % 11;
            if (id[17] != m[z])
            {
                ok = false;
            }
        }
        if (!ok)
        {
            cout << id << endl;
            allPassed = false;
        }
    }
    if (allPassed)
    {
        cout << "All passed" << endl;
    }
    return 0;
}