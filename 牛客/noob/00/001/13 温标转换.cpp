#include<iostream>
using namespace std;
int main()
{
    double K;
    cin >> K;
    double C = double(K) - 273.15;
    double F = C * 1.8 + 32;
    cout << F << endl;
    return 0;
}