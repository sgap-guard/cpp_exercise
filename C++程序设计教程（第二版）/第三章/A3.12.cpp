#include<iostream>
using namespace std;

int main()
{
    int i(0),ascii;
    char c;
    cout << "\t      ASCII Compiret Table\n";
    for(ascii = 32;ascii <= 126;ascii++)
    {
        c = ascii;
        cout << c << "="  << ascii << "\t";
        i++;
        if(i % 7 ==0)
        {
            cout << endl;
        }
    }
    return 0;
}