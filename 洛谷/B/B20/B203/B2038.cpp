#include<iostream>
using namespace std;
int main()
{
    char A;
    cin>>A;
    int a = int(A);
    if(a %2 == 0)
    cout << "NO" << endl;
    else
    cout << "YES" << endl;
    return 0;
}