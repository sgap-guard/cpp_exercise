#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Áõ¼ÑÁÖ 2604090112" << endl;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while (n--)
    {
        string s; cin >> s;
        char stk[1005];
        int top = 0;
        bool ok = true;
        for (int i = 0; i < (int)s.size(); i++)
        {
            char c = s[i];
            if (c == '(' || c == '[')
            {
                stk[top++] = c;
            }
            else if (c == ')')
            {
                if (top == 0 || stk[top - 1] != '(')
                {
                    ok = false;
                    break;
                }
                top--;
            }
            else if (c == ']')
            {
                if (top == 0 || stk[top - 1] != '[')
                {
                    ok = false;
                    break;
                }
                top--;
            }
        }
        if (ok && top == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}