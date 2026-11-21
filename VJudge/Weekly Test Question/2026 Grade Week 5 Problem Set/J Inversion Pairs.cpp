#include <iostream>
#include <vector>
using namespace std;
static vector<int> a;
static vector<int> temp;
long long cnt = 0;
void merge(int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;
    temp.resize(right - left + 1);
    while (i <= mid && j <= right)
    {
        if (a[i] <= a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
            cnt += (mid - i + 1);
        }
    }

    while (i <= mid)
    {
        temp[k++] = a[i++];
    }
    while (j <= right)
    {
        temp[k++] = a[j++];
    }
    for (i = 0; i < k; ++i)
    {
        a[left + i] = temp[i];
    }
}
void merge_sort(int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        merge_sort(left, mid);
        merge_sort(mid + 1, right);
        merge(left, mid, right);
    }
}
int main()
{
    int n; cin >> n;
    a.resize(n);
    temp.resize(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    merge_sort(0, n - 1);
    cout << cnt << endl;
    return 0;
}