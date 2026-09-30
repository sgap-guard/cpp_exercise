#include<iostream>
#include<string>
using namespace std;

int main()
{
    // 读取测试用例的数量 M
    int m;
    cin >> m;

    // 循环 M 次，每次处理一个密码
    // 循环变量 i 从 0 到 m-1，共执行 m 次
    for (int i = 0; i < m; i++)
    {
        // 读取当前测试用例的密码字符串
        // cin >> pw 会自动跳过前导空白字符，遇到空白（空格、换行、Tab）停止读取
        string pw;
        cin >> pw;

        // 获取密码的长度
        // size() 返回字符串中字符的个数，类型为 size_t（无符号整数），赋值给 int 是安全的（长度最大 50）
        int len = pw.size();

        // ========== 初始化四类字符是否出现的标志 ==========
        // 初始时都设为 false，表示尚未发现
        bool hasUpper = false;    // 是否出现大写字母
        bool hasLower = false;    // 是否出现小写字母
        bool hasDig = false;      // 是否出现数字
        bool hasSpecial = false;  // 是否出现特殊符号

        // ========== 遍历密码中的每一个字符 ==========
        // 使用范围 for 循环，依次取出 pw 中的每个字符 c
        for (char c : pw)
        {
            // 判断 c 是否为大写字母（A-Z）
            if (isupper(c))
            {
                hasUpper = true;
            }
            // 否则判断 c 是否为小写字母（a-z）
            else if (islower(c))
            {
                hasLower = true;
            }
            // 否则判断 c 是否为数字（0-9）
            else if (isdigit(c))
            {
                hasDig = true;
            }
            // 否则判断 c 是否为标点符号（即特殊符号）
            // ispunct 在 C++ 中判断的是所有可打印的标点符号，包括 !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
            // 本题的特殊符号集合只有 ~!@#$%^ 这 7 个，是 ispunct 的子集
            // 由于题目保证密码只由这四类字符组成，所以用 ispunct 判断特殊符号是正确的
            else if (ispunct(c))
            {
                hasSpecial = true;
            }
        }

        // ========== 统计出现的字符类别数 ==========
        // 用 typeCount 记录四类字符中出现了几类
        int typeCount = 0;

        // 每出现一类，计数器加 1
        if (hasUpper)
        {
            typeCount++;
        }
        if (hasLower)
        {
            typeCount++;
        }
        if (hasDig)
        {
            typeCount++;
        }
        if (hasSpecial)
        {
            typeCount++;
        }

        // ========== 判断密码是否安全 ==========
        // 安全条件：
        //   1. 长度在 [8, 16] 之间
        //   2. 出现的字符类别数至少为 3
        if (len >= 8 && typeCount >= 3 && len <= 16)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    // 输出一个多余的换行符（对评测结果无影响，但习惯上可以去掉）
    cout << endl;

    return 0;
}