#include<bits/stdc++.h>
using namespace std;

int a[100005];
long long pre[100005];
//数组建议定义在全局，这样可以避免重复定义

int main()
{
    pre[0] = 0;
    //前缀和初始化
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pre[i] = pre[i - 1] + a[i];
        //前缀和定义
    }

    cout << n << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << pre[i] << endl;
    }
    return 0;
}