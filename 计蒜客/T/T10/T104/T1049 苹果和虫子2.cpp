#include<iostream>
using namespace std;
int main()
{
    int m,t,s;
    cin >> m >> t >> s;
    
    if(t == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        int eat = s / t;
        if(eat <= m)
        {
        cout << m - eat << endl;
        }
        else if(eat > m)
        {
            cout << 0 << endl;
        }
        cout << 0 << endl;
    }
    return 0;
}