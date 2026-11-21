#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        bool is_first = true;
        for (char &c : s)
        {
            if (is_first)
            {
                c = (char)toupper((unsigned char)c);   // ← 见下方说明
                is_first = false;
            }
            if (c == ' ')
            {
                is_first = true;
            }
        }
        cout << s << endl;      // ← 在 for 外、while 内
    }
    return 0;
}