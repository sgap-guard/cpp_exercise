#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    string s = s1 + s2;
    cout << s << endl;
    return 0;
}