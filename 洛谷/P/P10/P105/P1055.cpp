#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int sum = 0;
    int multiplier = 1;
    for(int i = 0;i < 12;i++)
    {
        if(n[i] != '-')
        {
            sum += (n[i] - '0') * multiplier;
            multiplier++;
        }
    }
    int mod = sum % 11;
    char correct_char;
    if
    }