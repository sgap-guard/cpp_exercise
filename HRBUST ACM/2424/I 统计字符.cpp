#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);

        int cntAlpha = 0;
        int cntSpace = 0;
        int cntDig = 0;
        int cntOther = 0;

        for (char c : s)
        {
            if (isalpha(c))
            {
                cntAlpha++;
            }
            else if (isspace(c))
            {
                cntSpace++;
            }
            else if (isdigit(c))
            {
                cntDig++;
            }
            else
            {
                cntOther++;
            }
        }
        
        cout << cntAlpha << " " << cntSpace << " " << cntDig << " " << cntOther << endl;
    }
    return 0;
}
