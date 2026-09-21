#include<iostream>
using namespace std;
bool has0(int n)
{
    if (n==0) return true;
    while (n > 0)
    {
        int d = n % 10;
        if(d == 0) return true;
        n /= 10;
    }
    return false;
}
int main()
{
    int n;
    while(cin >> n)
    {
        if(has0(n))
        {
            cout << "AC" << endl;
        }
        else if((n % 7 == 0 || n % 8 == 0) && (n % 6 != 0 && n % 9 != 0))
        {
            cout << "WA" << endl;
        }
        else if((n % 7 != 0 && n % 8 != 0) && (n % 6 == 0 && n % 9 == 0))
        {
            cout << "AC" << endl;
        }
        else
        {
            cout << "TLE" << endl;
        }
    }
    return 0;
}
