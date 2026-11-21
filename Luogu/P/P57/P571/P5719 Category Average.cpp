#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n,k; cin>>n>>k;
    int suma = 0, sumb = 0;
    int cnta = 0, cntb = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            suma += i;
            cnta++;
        }
        else
        {
            sumb += i;
            cntb++;
        }
    }
    double avga = (double)suma / cnta;
    double avgb = (double)sumb / cntb;
    cout << fixed << setprecision(1) << avga << " " << avgb << endl;
    return 0;
}