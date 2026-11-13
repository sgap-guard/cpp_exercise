#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int cntA = 0, cntP = 0, cntF = 0;
    int score;
    while (cin >> score)
    {
        if (score < 0)
        {
            break;
        }
        else if (score >= 90 && score <= 100)
        {
            cntA++;
        }
        else if (score >= 60 && score < 90)
        {
            cntP++;
        }
        else if (score >= 0 && score < 60)
        {
            cntF++;
        }
    }
    cout << "A等级" << cntA << "人" << endl;
    cout << "P等级" << cntP << "人" << endl;
    cout << "F等级" << cntF << "人" << endl;
    return 0;
}