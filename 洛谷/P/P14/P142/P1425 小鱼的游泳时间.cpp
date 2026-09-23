#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,t;
    cin >> a >> b >> c >> d;
    t = 60 * c + d - 60 * a - b;
    int e,f;
    e = t / 60;
    f = t %60;
    cout << e << " " << f << endl;
    return 0;        
}