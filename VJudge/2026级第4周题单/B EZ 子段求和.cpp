#include<bits/stdc++.h>
using namespace std;

long long arr_a[1000000];
long long  arr_pre[1000000];

int main()
{
    // 读取数组的长度 N
    int n; cin >> n;

    // 初始化前缀和数组的第 0 项为 0
    // 数学意义：S_0 = 0，作为递推的初始边界条件
    arr_pre[0] = 0;

    // 循环读取数组元素，并同时计算前缀和
    for (int k = 1; k <= n; k++)
    {
        // 读取第 k 个元素的值存入数组 A
        cin >> arr_a[k];

        // 递推计算前缀和：S_k = S_{k-1} + A_k
        // 由于 arr_pre 和 arr_a 都是全局的 long long 类型，
        // 这里的加法不会发生 32 位 int 的溢出（最大可达 9.22e18，远大于 5e13）
        arr_pre[k] = arr_pre[k-1] + arr_a[k];
    }

    // 读取查询的次数 Q
    long long Q; cin >> Q;

    // 循环处理每一次查询
    for (int q = 1; q <= Q; q++)
    {
        // 读取当前查询的起始下标 i 和子段长度 l
        long long i,l;
        cin >> i >> l;

        // 计算左侧前缀和的下标：我们要减去 S_{i-1}
        // 所以左边界索引是 i - 1
        int li = i - 1;

        // 计算右侧前缀和的下标：子段从 i 开始，长度为 l，最后一个元素的下标是 i + l - 1
        // 所以右边界索引是 i + l - 1
        int ri = i + l - 1;

        // 利用前缀和公式 O(1) 计算区间和：
        // Sum(i, l) = S_{i+l-1} - S_{i-1}
        long long segsum = arr_pre[ri] - arr_pre[li];

        // 输出结果并换行
        cout << segsum << endl;
    }

    // 程序正常结束
    return 0;
}