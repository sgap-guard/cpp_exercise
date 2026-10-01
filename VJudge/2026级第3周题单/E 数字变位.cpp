#include <bits/stdc++.h>
using namespace std;

int dig[20];

int main()
{
    // 声明 long long 类型的变量 x，用于接收输入的数字
    // 注意：题目数据范围 x < 10^9，int 也够用，但为了后续拼接结果不溢出，习惯上用 long long
    long long x;
    cin >> x;

    // k 用于记录 x 的位数
    int k = 0;

    // ========== 第 1 步：提取 x 的每一位数字 ==========
    // 通过不断取模 10 和除以 10，从低位到高位依次取出每一位
    // 例如 x = 9037：
    //   第 1 次：dig[1] = 7, x = 903
    //   第 2 次：dig[2] = 3, x = 90
    //   第 3 次：dig[3] = 0, x = 9
    //   第 4 次：dig[4] = 9, x = 0
    // 循环结束时 k = 4，dig = [7, 3, 0, 9]（低位在前）
    while (x > 0)
    {
        k++;
        dig[k] = x % 10;
        x /= 10;
    }

    // ========== 第 2 步：对数位进行升序排序 ==========
    // sort 的第一个参数是起始地址，第二个参数是结束地址的下一个位置
    // dig + 1 表示从 dig[1] 开始，dig + k + 1 表示到 dig[k] 结束（不包含 dig[k+1]）
    // 排序后 dig[1] <= dig[2] <= ... <= dig[k]
    // 例如 dig = [7, 3, 0, 9] 排序后变成 [0, 3, 7, 9]
    sort(dig + 1, dig + k + 1);

    // ========== 第 3 步：构造最小值 ==========
    // 最小值的关键：首位不能为 0
    // 因此需要把"最小的非零数位"放到首位，其余数位按升序依次排列
    int mindig[15];       // 用于存放最小值排列后的数位
    int minIndex = 1;     // 记录最小非零数位在 dig 数组中的下标

    // 从前往后遍历 dig，找到第一个非零数位（因为 dig 已升序，第一个非零就是最小的非零）
    // 例如 dig = [0, 3, 7, 9]，找到的第一个非零是 dig[2] = 3
    for (int i = 1; i <= k; i++)
    {
        if (dig[i] != 0)
        {
            mindig[1] = dig[i];   // 把这个非零数位放到首位
            minIndex = i;         // 记录它的原始下标，后面要跳过它
            break;                // 找到即退出循环
        }
    }

    // 将 dig 中除 minIndex 以外的所有数位，按原顺序（升序）填入 mindig 的剩余位置
    // 例如 dig = [0, 3, 7, 9], minIndex = 2
    //   i=1: 跳过（i == minIndex 不成立？不，i=1 时 i != minIndex 成立，填入 dig[1]=0）→ mindig[2]=0
    //   i=2: 跳过（i == minIndex）
    //   i=3: 填入 dig[3]=7 → mindig[3]=7
    //   i=4: 填入 dig[4]=9 → mindig[4]=9
    // 最终 mindig = [3, 0, 7, 9]
    int pos = 2;
    for (int i = 1; i <= k; i++)
    {
        if (i != minIndex)
        {
            mindig[pos] = dig[i];
            pos++;
        }
    }

    // ========== 第 4 步：拼接最小值 ==========
    // 利用公式 value = value * 10 + 数位，将数位数组转换为一个整数
    // 例如 mindig = [3, 0, 7, 9]：
    //   i=1: min_value = 0*10 + 3 = 3
    //   i=2: min_value = 3*10 + 0 = 30
    //   i=3: min_value = 30*10 + 7 = 307
    //   i=4: min_value = 307*10 + 9 = 3079
    long long min_value = 0;
    for (int i = 1; i <= k; i++)
    {
        min_value = min_value * 10 + mindig[i];
    }

    // ========== 第 5 步：拼接最大值 ==========
    // 最大值的关键：高位越大越好
    // dig 已经是升序排列，因此从后往前遍历，得到的就是降序排列
    // 例如 dig = [0, 3, 7, 9]：
    //   i=4: max_value = 0*10 + 9 = 9
    //   i=3: max_value = 9*10 + 7 = 97
    //   i=2: max_value = 97*10 + 3 = 973
    //   i=1: max_value = 973*10 + 0 = 9730
    // 注意：这里必须用 dig 而不是 mindig！
    // 因为 mindig 为了最小值把 0 挤到了第二位，破坏了单调性
    long long max_value = 0;
    for (int i = k; i >= 1; i--)
    {
        max_value = max_value * 10 + dig[i];
    }

    // ========== 第 6 步：输出结果 ==========
    // 先输出最大值，再输出最小值，中间用空格分隔，最后换行
    cout << max_value << " " << min_value << endl;
    return 0;
}