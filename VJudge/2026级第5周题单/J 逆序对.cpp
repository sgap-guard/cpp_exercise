#include <iostream>
#include <vector>
using namespace std;

static vector<int> a;
long long count = 0;

// 归并排序的合并函数，用于计算逆序对
void merge(int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;
    
    vector<int> temp(right - left + 1);
    // 比较左右两部分的元素，并按顺序放入temp数组
    while (i <= mid && j <= right)
    {
        if (a[i] <= a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
            // 如果a[i] > a[j]，说明存在逆序对
            // 由于左右两部分都是有序的，所以a[i]及其后面的所有元素都大于a[j]
            count += (mid - i + 1);
        }
    }
    
    // 将剩余的元素复制到temp数组中
    while (i <= mid)
    {
        temp[k++] = a[i++];
    }
    
    while (j <= right)
    {
        temp[k++] = a[j++];
    }
    
    // 将排序后的元素复制回原数组
    for (i = 0; i < k; ++i)
    {
        a[left + i] = temp[i];
    }
}

// 归并排序函数，递归地对数组进行排序并计算逆序对
void merge_sort(int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        
        // 递归地对左半部分和右半部分进行排序
        merge_sort(left, mid);
        merge_sort(mid + 1, right);
        
        // 合并两个有序部分
        merge(left, mid, right);
    }
}

int main()
{

    int n;
    
    // 读取序列的长度n
    cin >> n;
    
    // 调整数组大小以存储n个元素
    a.resize(n);
    temp.resize(n);
    
    // 读取序列中的每个元素
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    
    // 调用归并排序函数，开始计算逆序对
    merge_sort(0, n - 1);
    
    // 输出逆序对的总数
    cout << count << endl;
    
    return 0;
}