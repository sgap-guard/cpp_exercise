#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y;
    cin >> x;
    if (x < 5)
    {
        y = abs(x);
    }
    else if (x >= 5 && x < 10)
    {
        y = 3 * x * x - 2 * x +1;
    }
    else
    {
        y = x / 5;
    }
    cout << "y = " << y << endl;
    return 0;
}