#include<iostream>
using namespace std;

int main()
{
    char murder;
    for (murder = 'A'; murder <= 'D'; murder++)
    {
        if ((murder != 'A') + (murder != 'D') + (murder != 'C') + (murder != 'D') == 3)
        {
            cout << "The person whose number is " << murder << " is murder" << endl;
        }
    }
    return 0;
}