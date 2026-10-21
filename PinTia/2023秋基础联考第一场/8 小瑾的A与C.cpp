#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<char> grade(n);
        vector<char> modified;

        for (int i = 0; i < n; i++)
        {
            cin >> grade[i];
            if (grade[i] == 'C')
            {
                modified.push_back('A');
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (grade[i] != 'C')
            {
                cout << grade[i] << " ";
            }
        }

        for (int i = 0; i < modified.size(); i++)
        {
            cout << modified[i];
            if (i < modified.size() - 1) cout << " ";
        }

        cout << endl;
    }

    return 0;
}