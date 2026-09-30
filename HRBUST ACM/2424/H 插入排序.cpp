#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        t--;
        
        int n,x;           // n：原始有序数组元素个数；x：待插入的数字
        cin >> n >> x;     // 读取n和x
        int arr[1005];     // 定义数组，存放有序数列，容量1005满足n<1000的要求
        for (int i = 0; i < n; i++)  // 循环读取n个原始有序数字
        {
            cin >> arr[i];           // 将读到的数字存入数组第i个位置
        }
        int pos = 0;                 // pos用来记录x要插入的下标位置，初始从0开始
        while (pos < n && arr[pos] < x)  // 寻找插入点：没走到数组末尾，并且当前数字小于x
        {
            pos++;                    // 符合条件，继续向后查找
        }
        // 从最后一个原始元素开始，向后挪，腾出pos位置给x
        for (int i = n; i >= pos; i--)
        {
            arr[i] = arr[i - 1];      // 将前一个位置的值复制到当前位置，完成后移
        }
        arr[pos] = x;                 // 将待插入数字x放入空出来的pos位置
        // 遍历输出插入完成后的n+1个元素
        for (int i = 0; i < n + 1; i++)
        {
            if (i > 0)                // 不是第一个数字的时候，先输出空格分隔
            {
                cout << ' ';
            }
            cout << arr[i];           // 输出数组当前元素
        }
        cout << endl;                 // 一组数据全部输出完毕，换行
    }
    return 0;                         // 主函数正常结束，返回0
}
