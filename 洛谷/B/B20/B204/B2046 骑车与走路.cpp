#include<iostream>
using namespace std;
int main()
{
    double t1,t2;
    int s;
    cin >> s;
    t1 = s / 3.0 + 27 + 23;
    t2 = s /1.2;
    if(t1 > t2)
    cout << "Walk" << endl;
    else if(t1 < t2)
    cout << "Bike" << endl;
    else
    cout << "All" << endl;
    return 0;
}