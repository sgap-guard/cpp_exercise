#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    // 冒泡排序，只扫描 K 遍
    for (int i = 0; i < k; i++)
    {
        // 第 i 遍（从0开始）比较范围是前 n-1-i 对
        for (int j = 0; j < n - 1 - i; j++)
        {
            // string 直接比较字典序，前一个大于后一个就交换
            if (str[j] > str[j + 1])
            {
                swap(str[j], str[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << endl;
    }
    return 0;
}