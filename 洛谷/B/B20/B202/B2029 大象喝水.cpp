#include <iostream>
#include <cmath>
#define pi 3.14
using namespace std;
int main()
{
    int h,r;
    cin>>h>>r;
    double v = h*r*r*pi;
    double cnt = 20000/v;//一桶的体积除以每桶的体积
    int ans = ceil(cnt);//ceil向上取整
    cout<<ans<<endl;
    return 0;
}