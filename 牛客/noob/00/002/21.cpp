#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n >= 1 && n <= 6)
    {
        cout << n + 1 << endl;
    }
    else if(n = 7)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
    return 0;
}