#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;           // a,b：查询区间 [a,b]
        cin >> a >> b;      // 读取每组的左右边界a和b
        // 遍历区间内所有整数x，从a到b
        for (int x = a; x <= b; ++x)
        {
            // 计算x的平方，强制转为long long防止int溢出
            long long sq = (long long)x * x;
            // 将数字x转为字符串，方便截取后缀对比
            string s_x = to_string(x);
            // 将平方结果sq转为字符串
            string s_sq = to_string(sq);
            
            int len_x = s_x.length();
            // 获取x字符串的长度
            int len_sq = s_sq.length();
            // 获取平方数字符串的长度
            
            // 判断：平方数的字符串长度 >= x的长度，并且平方数的末尾len_x个字符等于x本身
            if ((len_sq >= len_x) && (s_sq.substr(len_sq - len_x) == s_x))
            {
                // substr代表截取字符串的子串，这里截取的是平方数的末尾len_x个字符，即x本身
                // 满足条件，说明是同构数，输出x并加空格
                cout << x << " "; 
            }
        }
        // 一组数据全部判断完成，换行
        cout << endl;
    }
    return 0;
}