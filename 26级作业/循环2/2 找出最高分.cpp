#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int Max_Score = 0;
    int score;
    do
    {
        cin >> score;
        if (score == -1) break;
        if (score > Max_Score) Max_Score = score;
    } 
    while (true);
    cout << Max_Score << endl;
    return 0;
}