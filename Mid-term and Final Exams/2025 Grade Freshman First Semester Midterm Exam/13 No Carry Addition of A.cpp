#include <iostream>
#include <string>
#include <algorithm> // 用于调用 reverse 函数

using namespace std;

int main() {
    // 关闭同步流，加速读取和输出（暴力做法必须加这个，否则容易超时）
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string a, b;
    cin >> a >> b;
    
    // 暴力第一步：把两个字符串都倒过来，方便从第 0 位开始对齐相加
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    string res = "";
    // 暴力第二步：找出两个数中较长的那个长度
    int max_len = max(a.length(), b.length());
    
    // 暴力第三步：强行遍历每一个位置进行计算
    for (int i = 0; i < max_len; i++) {
        // 如果当前位置超过了某个数的长度，就默认补 0
        int digit_a = (i < a.length()) ? a[i] - '0' : 0;
        int digit_b = (i < b.length()) ? b[i] - '0' : 0;
        
        // 计算当前位置的和，对 10 取模（实现不进位）
        int sum = (digit_a + digit_b) % 10;
        
        // 将算出的数字转回字符，强行拼接到结果字符串里
        res += (sum + '0');
    }
    
    // 因为我们是从低位往高位算的，现在算好的 res 也是倒过来的，再倒回来
    reverse(res.begin(), res.end());
    
    // 暴力第四步：去除前导零
    // 找到第一个不是 '0' 的下标。
    // (注意：res.length() - 1 是为了防止结果全为0时，最后一个0被删掉)
    int start = 0;
    while (start < res.length() - 1 && res[start] == '0') {
        start++;
    }
    
    // 输出从 start 开始到结尾的子字符串
    cout << res.substr(start) << endl;
    
    return 0;
}