#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    long long x1,y1;cin>>x1>>y1;
    long long x2,y2;cin>>x2>>y2;
    double dE = 1.0 * sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    double dM = 1.0 * abs(x2-x1)+abs(y2-y1);
    double delta = 1.0 * fabs(dE-dM);
    cout << fixed << setprecision(10) << delta << endl;
    return 0;
}