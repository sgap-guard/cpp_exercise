#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x,y;
    cin>>x;
    if(x != 0)
    {
        y = sin(x) + sqrt(x * x +1);
    }
    else
    {
        y = cos(x) -x * x +3 * x;
    }
    cout << "y = " << y << endl;
}