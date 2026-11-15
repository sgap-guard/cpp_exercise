#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n; cin >> n;
    int sum = 0;
    for(char c : n)
    {
        if (c == '-')
        {
            continue;
        }    
     sum += c - '0';
    }
    cout << sum << endl;
    return 0;
}