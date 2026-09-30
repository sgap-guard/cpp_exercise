#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        int cnt = 0;
        bool inWord = false;
        for (char c : s)
        {
            if (c != ' ')
            {
                if (inWord == false)
                {
                    cnt++;
                    inWord = true;
                }
            }
            else
            {
                inWord = false;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
