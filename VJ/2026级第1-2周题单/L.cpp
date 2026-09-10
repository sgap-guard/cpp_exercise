#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0;i < n;i++)
    {
    string s;
    cin >> s;
    int len = s.size();
    int mid = len - 2;
    if(len > 10)
    {cout << s[0] << mid << s[len-1] << endl;}
    else
    {cout << s << endl;}
    }
    return 0;
}
