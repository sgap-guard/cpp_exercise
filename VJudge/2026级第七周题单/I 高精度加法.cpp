#include <bits/stdc++.h>
using namespace std;

static string AddStr(string a, string b)//高精度大数加法
{
    string res = "";//这一步是为了防止在后续的操作中出现越界的情况
    int i = a.size() - 1, j = b.size() - 1, carry = 0;
    //从两个字符串的末尾开始逐位相加，直到两个字符串都遍历完，并且没有进位为止
    while (i >= 0 || j >= 0 || carry > 0)
    {
        int n1 = (i >= 0) ? a[i] - '0' : 0;
        int n2 = (j >= 0) ? b[j] - '0' : 0;
        //上面两行是为了处理两个字符串长度不一致的情况，如果某个字符串已经遍历完了，就将其对应的数字视为0
        int sum = n1 + n2 + carry;
        //上面这行是为了计算当前位的和，包括进位
        //下面这行是为了将当前位的和转换为字符串，添加到结果字符串的末尾
        res += to_string(sum % 10);
        {
            carry = sum / 10;
            i--; j--;
        }
    }
    reverse(res.begin(), res.end());
    //上面这行是为了将结果字符串反转，因为我们在计算时是从个位开始的，而结果字符串是从个位开始的
    return res;
    //返回这行是为了将结果字符串返回给调用者
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string a, b; cin >> a >> b;
    cout << AddStr(a, b) << endl;
    return 0;
}