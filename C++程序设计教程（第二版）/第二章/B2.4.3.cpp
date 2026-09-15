#include<iostream>
using namespace std;
int main()
{
    int x,a,b,c;
    cin>>x;
    a=x/100;//百位
    b=x/10%10;//十位
    c=x%10;//个位
    cout << c << b << a << endl;
    return 0;
}