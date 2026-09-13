#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    cout << "The maximum number is : "<< max(a,max(b,c)) << endl; 
    cout << "The minimum number is : "<< min(a,min(b,c)) << endl;
    return 0;
}