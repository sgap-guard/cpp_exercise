#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b; char c1, c2, c3;
    if (cin >> c1 >> c2 >> a >> c3 >> c1 >> c2 >> b)
    {
        swap(a, b);
        cout << "a=" << a << "," << "b=" << b << endl;
    }
    return 0;
}