#include <iostream>
using namespace std;

int main()
{
    char c;
    while (cin.get(c))
    {
        if (c == '\n')
        {
            continue;
        }
        if (c >= 'A' && c <= 'Z')
        {
            c = tolower(c); 
        }
        else if (c >= 'a' && c <= 'z')
        {
            c = toupper(c);
        }
        cout << c << endl;
    }
    return 0;
}