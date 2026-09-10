#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int MAX = max({a,max(b,c)});
    cout<<MAX<<endl;
    return 0;
}