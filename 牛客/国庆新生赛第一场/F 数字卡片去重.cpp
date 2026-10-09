#include <bits/stdc++.h>    // 竞赛万能头文件，包含了所有标准库
using namespace std;        // 引入标准命名空间，省去写 std:: 的麻烦

#define int long long       // 【竞赛常用套路】把 int 重定义为 long long，防止数据溢出。这行代码在本题其实没必要，因为去重计数不会溢出，但写习惯了也无妨。

signed main()               // 配合上面的宏定义，如果没宏定义就用 int main()。这里用 signed 是为了防止宏展开后变成 long long main 导致编译错误。
{
    int n;                  // 定义一个整型变量 n，用于存储接下来要输入的数字个数
    cin >> n;               // 从标准输入读取 n 的值

    vector<int> arr(n);     // 定义一个 vector（动态数组），大小为 n，用来存放这 n 个数字卡片

    // 循环读取 n 个数字存入数组
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];      // 依次读入每个数字
    }

    // 核心步骤 1：排序
    sort(arr.begin(), arr.end()); 
    // 将数组 arr 中的元素从小到大排序。此时，如果有重复的数字，它们会紧挨在一起。

    // 核心步骤 2：去重并计算新长度
    // unique 函数会将相邻重复的元素移到数组末尾，并返回一个指向去重后“新逻辑结尾”的迭代器
    // 用这个迭代器减去数组起始位置 arr.begin()，得到的就是去重后的元素个数 m
    int m = unique(arr.begin(), arr.end()) - arr.begin(); 
    
    cout << m << endl;      // 先输出去重后的数字总个数

    // 核心步骤 3：按顺序输出这些不重复的数字
    for (int i = 0; i < m; i++)
    {
        if (i > 0)          // 如果当前不是第一个数字（i > 0）
        {
            cout << " ";    // 就在前面输出一个空格，保证格式正确（如 "1 2 3" 而不是 "1 2 3"）
        }
        cout << arr[i];     // 输出当前位置的数字
    }
    
    cout << endl;           // 所有数字输出完毕，最后输出一个换行符
    return 0;               // 程序正常结束，返回 0
}