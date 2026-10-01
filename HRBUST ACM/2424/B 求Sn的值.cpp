#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    //这里如果换成if(!(cin >> t)) return 0;
    //就会WA，这是因为cin >> t;会读取一个空格，导致t为0
    while(t--)
    {
        long long a,n;
        cin >> a >> n;
        long long sum = 0;
        //这计算的是n年的总和
        long long ct = 0;
        //这计算的是当年的数值
        for (int k = 0; k < n; k++)
        {
            ct = ct * 10 + a;
            //这是因为每年的数值都是上一年的10倍加上a
            sum += ct;
        }
        cout << sum << endl;
    }
    return 0;  
}
