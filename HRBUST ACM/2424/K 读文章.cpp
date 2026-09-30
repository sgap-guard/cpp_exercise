// 此题与[密码](./VJ/2026级第三周题单/密码.cpp)有相同之处
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    cin.ignore();

    for (int i = 0; i < m; i++)
    {
        int cntUpper = 0;
        int cntLower = 0;
        int cntDig = 0;
        int cntSpace = 0;
        int cntOther = 0;

        for (int k = 1; k <= 3; k++)
        {
            string s;
            getline(cin,s);

            for (char c : s)
            {
                if (isupper(c))
                {
                    cntUpper++;
                }
                else if (islower(c))
                {
                    cntLower++;
                }
                else if (isdigit(c))
                {
                    cntDig++;
                }
                else if (c == ' ')
                {
                    cntSpace++;
                }
                else
                {
                    cntOther++;
                }
            }
        }
        cout << cntUpper << " " << cntLower << " " << cntDig << " " << cntSpace << " " << cntOther << endl;
    }
    return 0;
}