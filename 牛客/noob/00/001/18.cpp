#include<iostream>
using namespace std;
int main()
{
    long a,b,c;
    cin>>a>>b>>c;
    long long S,V;
    S = 2*(a*b + b*c + a*c);
    V = a*b*c;
    cout<<S<<endl<<V<<endl;
}