#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = 0;
    int cnt = 1;
    for (int i = 0; i < 12; i++)
    {
        if (s[i] != '-')
        {
            sum += (s[i] - '0') * cnt;
            cnt++;
        }
    }
    sum %= 11;
    char code = (sum == 10) ? 'X' : (sum + '0');
    if (s[12] == code)
    {
        cout << "Right" << endl;
    }
    else
    {
        s[12] = code;
        cout << s << endl;
    }
    
    return 0;
}