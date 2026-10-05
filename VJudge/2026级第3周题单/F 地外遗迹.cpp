#include <bits/stdc++.h>
using namespace std;

// ========== 全局数组 ==========
// mp[c - 'a'] 存储字符 c 在新字典序下映射到的标准字典序字符
// 例如新字典序中最小的字符映射到 'a'，第二小的映射到 'b'，依此类推
char mp[30];

signed main()
{
    // 读入新字典序字符串 P（长度为 26）
    string P;
    cin >> P;

    // ========== 构造映射表 ==========
    for (int i = 1; i <= 25; i++)
    {
        // P[i] 是新字典序中第 i 个字符
        // P[i] - 'a' 是它在标准字母表中的下标
        // 'a' + i 是标准字典序中排名第 i 的字符
        // 含义：把 P[i] 映射到 'a' + i
        mp[P[i] - 'a'] = 'a' + i;
    }

    // 读入询问次数 n
    int n;
    cin >> n;

    // ========== 处理每组询问 ==========
    for (int k = 1; k <= n; k++)
    {
        // 读入两个单词
        string s1, s2;
        cin >> s1 >> s2;

        // 将 s1 和 s2 中的每个字符替换为映射后的字符
        string t1 = "", t2 = "";
        for (char c : s1)
        {
            t1 += mp[c - 'a'];
        }
        for (char c : s2)
        {
            t2 += mp[c - 'a'];
        }

        // 比较替换后的字符串（标准字典序）
        // 如果 t1 < t2，说明 s1 在新字典序下小于 s2
        if (t1 < t2)
        {
            cout << "green" << endl;
        }
        else
        {
            cout << "red" << endl;
        }
    }
    return 0;
}