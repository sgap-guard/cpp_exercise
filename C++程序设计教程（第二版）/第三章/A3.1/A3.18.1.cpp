#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    for(a = 0; a <= 1; a++)
    {
        for(b = 0; b <= 1; b++)
        {
            for(c = 0; c <= 1; c++)
            {
                for(d = 0; d <= 1; d++)
                {
                    if (((a == 0) + (c == 1) + (d == 1) + (d == 0)) == 3 && ((a + b + c + d) == 1))
                    {
                        cout << "The person whose number is 1 is murder" << endl;
                        cout << a << b << c << d << endl;
                    }
                }
            }
        }
    }
    return 0;
}