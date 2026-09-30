#include <bits/stdc++.h>
//万能头文件
#define int long long
//定义宏，int改为long long
using namespace std;

signed main()
//为什么用signed，因为int会爆long long，导致溢出
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    //把cin与cout的流与程序分离，强制同步，减少时间
    int T; cin >> T;
    while (T--)
    {
        int n; cin >> n;
        int ans = 0; int pre = 0;
        int minn = 1e18;
        //初始化相关变量
        
        for (int i = 0; i < n; i++)
        {
            int temp; cin >> temp;
            // 核心逻辑：计算把当前位置(i)及其后面的所有元素都替换成当前值(temp)时，整个数组的总和
            if (minn > temp * (n - i) + pre)
            // pre 是前面 i 个元素的和，temp * (n - i) 是当前位置及后面元素替换后的和
            {
                minn = temp * (n - i) + pre;
                // 更新最小总和为当前替换方案的总和
            }
            pre += temp;
            // 前缀和更新：把当前元素累加进 pre，供下一次循环（计算下一个位置的总和）使用
            // 前缀和的计算公式是：pre = pre + temp
        }
        cout << ans << endl;
    }
    return 0;
}