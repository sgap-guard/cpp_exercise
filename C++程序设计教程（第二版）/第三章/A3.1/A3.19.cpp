#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "A       B       C" << endl;
    for (a = 1; a <= 4; a++)
    {
        for (b = a + 1; b <= 5; b++)//b后于a考试
        {
            for (c = b + 1; c <= 6; c++)//c后于b考试。排除a、b、c重复的情况，不能在同一天考试
            {
                if (b < c)
                {
                    cout << a << '\t' << b << '\t' << c << endl;
                }
            }
        }
    }
    return 0;
}