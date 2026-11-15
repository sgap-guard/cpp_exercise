#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int score; cin >> score;
    if (score > 100 || score < 0)
    {
        cout << "成绩不合法" << endl;
    }
    else if (score >= 90)
    {
        cout << "优秀" << endl;
    }
    else if (score >= 80)
    {
        cout << "良" << endl;
    } 
    else if (score >= 70)
    {
        cout << "中" << endl;
    }
    else if (score >= 60)
    {
        cout << "及格" << endl;
    }
    else
    {
        cout << "差" << endl;
    }
    return 0;
}