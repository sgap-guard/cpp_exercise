#include<iostream>
using namespace std;
int main()
{
    long long  a,b;
    cin>>a>>b;
    if(a > b)
    {
        cout << ">" << endl;
    }
    else if (a < b)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "=" << endl;
    }
    return 0;
}