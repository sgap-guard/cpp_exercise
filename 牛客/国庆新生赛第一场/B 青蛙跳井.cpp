#include <bits/stdc++.h>    // 万能头文件，包含所有标准库
using namespace std;        // 引入标准命名空间

signed main()               // 主函数，返回有符号整数
{
    long long H,U,D;        // 定义三个长整型变量：井深H，白天爬升U，夜里下滑D
    // 用long long防止数据过大溢出

    cin >> H >> U >> D;     // 读入三个参数

    if (H <= U)             // 特判：如果井深小于等于白天能爬的高度
    {                       // 说明第一天白天爬升后就达到或超过井口了
        cout << 1 << endl;  // 直接输出第1天
        return 0;           // 结束程序
    }

    static long long a = U - D;    // a = 每天净爬升高度（白天爬U，夜里滑D，一天净增U-D）
    static long long b = H - U;    // b = 扣除最后一天要爬的U米后，剩下的高度
    // 解释：最后一天白天直接爬U米出去，所以前面只需要爬到 H-U 米的位置

    // 计算前面需要几天：向上取整 (b + a - 1) / a
    // 等价于 ceil((double)b / a)，但避免了浮点数运算
    static long long day = (b + a - 1) / a;

    cout << day + 1 << endl; // 前面day天，加上最后1天，总共day+1天
    return 0;                // 结束程序
}