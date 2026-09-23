#include <iostream>
using namespace std;

int main()
{
    long long x;
    char c;
    cin>>x>>c;
    if(x <= 1000 && c == 'n')
    cout << 8 << endl;
    else if (x <= 1000 && c == 'y')
    cout << 13 << endl;
    else if (x > 1000 && c == 'n')
    cout << 8 + (x - 1000 + 499) /500 *4 << endl;
    else if (x > 1000 && c == 'y') 
    cout << 13 + (x - 1000 + 499) /500 *4 << endl;
    return 0;
}