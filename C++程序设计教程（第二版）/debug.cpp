#include <iostream>
#include <string>
using namespace std;

signed main()
{
    string s; cin >> s;
    for (char c : s)
    {
        int a = c;
        cout << a << endl;
    }
    return 0;
}