#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n >= 1 && n <= 6)//如果n在1到6之间
    {
        cout << n + 1 << endl;
    }
    else if(n == 7)//如果n为7
    {
        cout << 1 << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
    return 0;
}