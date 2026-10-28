#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    bool first = true;
    if (n < 0) 
    {
        cout << "fu";
        first = false;
        n = -n;
    }
    if (n == 0) 
    {
        if (first) cout << "ling";
        else cout << " ling";
        return 0;
    }
    string s = to_string(n);
    for (char c : s)
    {
        if (!first) cout << " ";
        if (c == '0') cout << "ling";
        else if (c == '1') cout << "yi";
        else if (c == '2') cout << "er";
        else if (c == '3') cout << "san";
        else if (c == '4') cout << "si";
        else if (c == '5') cout << "wu";
        else if (c == '6') cout << "liu";
        else if (c == '7') cout << "qi";
        else if (c == '8') cout << "ba";
        else if (c == '9') cout << "jiu";
        first = false;
    }
    return 0;
}