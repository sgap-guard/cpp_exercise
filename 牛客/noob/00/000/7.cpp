#include <iostream>
#include<iomanip>
using namespace std;

int main() 
{
    long c,d;
    cin >> c >> d;
    double w = double(d) / c;
    cout << w * 100 << "%" << endl;
    return 0;
}