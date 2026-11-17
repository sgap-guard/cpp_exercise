#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;
    int num[9]; int idx = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] != '-')
        {
            num[idx++] = s[i] - '0';
        }
    }

    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        sum += num[i] * (i + 1);
    }
    
    int mod = sum % 11;
    char correct_code;
    if (mod == 10)
    {
        correct_code = 'X';
    }
    else
    {
        correct_code = '0' + mod;
    }
    if (s[s.length() - 1] == correct_code)
    {
        cout << "Right" << endl;
    }
    else
    {
        s[s.length() - 1] = correct_code;
        cout << s << endl;
    }
    return 0;
}