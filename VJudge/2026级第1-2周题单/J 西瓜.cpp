#include <iostream>
using namespace std;
int main()
{
    int w;
    cin >> w;
    if(w %2 == 0 && w > 2)//如果w是偶数且大于2
    {cout << "YES";}
    else
    {cout << "NO";}
    return 0;
}
