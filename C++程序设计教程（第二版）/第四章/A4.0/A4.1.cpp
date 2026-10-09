#include <iostream>
using namespace std;

int main()
{
    int mark[100],i,oven(0);
    double aver(0.0);
    for (i = 0; i < 100; i++)
    {
        mark[i] = rand() % 101;
        aver += mark[i];
        aver /= 100.0;
        for (i = 0; i < 100; i++)
        {
            if (mark[i] >= aver)
            {
                oven++;
            }
        }
        cout << "The average score is: " << aver << endl;
        cout << "The number of students who passed the exam is: " << oven << endl;
    }
    return 0;
}