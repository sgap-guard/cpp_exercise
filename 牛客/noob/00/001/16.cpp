#include <iostream>
using namespace std;
int main()
{
    long long s;
    cin>>s;
    long long H,M,S;
    H = s / 3600;
    M = s % 3600 / 60;
    S = s % 60;
    cout<<H<<" "<<M<<" "<<S<<endl;
    return 0;
}