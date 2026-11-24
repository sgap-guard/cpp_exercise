#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string numStr = "";
    for (char c : s)
    {
        if (isdigit(c))
        {
            numStr += c;
        }
    }
    if (!numStr.empty())
    {
        long long result = stoll(numStr);
        cout << result << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}