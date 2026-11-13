#include <bits/stdc++.h>
using namespace std;

static int a[25];
void printArr(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << "原始序列: ";
    printArr(n);
    for (int i = 2; i <= n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 1 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
        cout << "第" << (i - 1) << "趟排序结果: ";
        printArr(n);
    }
    return 0;
}