#include <iostream>
using namespace std;

int main() 
{
    int vote;
    int countA = 0, countB = 0, countC = 0;
    int TVV = 0;
    while (cin >> vote && vote != -1) 
    {
        if (vote == 1 || vote == 2 || vote == 3) 
        {
            TVV++;  
        }
        if (vote == 1) 
        {
            countA++;
        } 
        else if (vote == 2) 
        {
            countB++;
        } 
        else if (vote == 3) 
        {
            countC++;
        }
    }
    cout << "A=" << countA << endl;
    cout << "B=" << countB << endl;
    cout << "C=" << countC << endl;
    cout << "Tot=" << TVV << endl;
    if (TVV > 0 && countA > TVV / 2.0) 
    {
        cout << "A-yes" << endl;
    } 
    else if (TVV > 0 && countB > TVV / 2.0) 
    {
        cout << "B-yes" << endl;
    } 
    else if (TVV > 0 && countC > TVV / 2.0) 
    {
        cout << "C-yes" << endl;
    } 
    else 
    {
        cout << "all-NO" << endl;
    }
    return 0;
}