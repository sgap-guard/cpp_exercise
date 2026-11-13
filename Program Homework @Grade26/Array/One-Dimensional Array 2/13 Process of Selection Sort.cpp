#include <bits/stdc++.h>
using namespace std;

int a[15];
void printArr(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i > 0) cout << " ";
        cout << a[i];
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        printArr(n);
        return 0;
    }
    for (int k = 0; k < n - 1; k++)
    {
        int minPos = k;
        for (int j = k + 1; j < n; j++)
        {
            if (a[j] < a[minPos])
            {
                minPos = j;
            }
        }
        swap(a[k], a[minPos]);
        printArr(n);
    }
    return 0;
}