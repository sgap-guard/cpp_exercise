#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double average = (a+b+c) / 3.0;
    double minNum = min(a,min(b,c));
    cout << "平均值为:" << average << endl;
    cout << "最小值为:" << minNum << endl;
    return 0;
}