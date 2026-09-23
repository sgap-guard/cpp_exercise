#include <iostream>
using namespace std;
const int MOD = 1e9 + 7;//定义一个常量MOD，用于存储1e9 + 7，避免溢出
const int MAXN = 1005;//定义一个常量MAXN，用于存储1005，避免数组越界
long long a[MAXN][MAXN];   // 全局数组，自动初始化为 0
int main() 
{
    int n, m;
    cin >> n >> m;
    // 初始化第一行和第一列
    for (int i = 1; i <= n; i++) a[i][1] = 1;
    //初始化第一行，每个位置的路径数为1，因为只能从左到右移动
    for (int j = 1; j <= m; j++) a[1][j] = 1;
    //初始化第一列，每个位置的路径数为1，因为只能从上到下移动  
    // 递推填充
    for (int i = 2; i <= n; i++) 
    {
        for (int j = 2; j <= m; j++) 
        {
            a[i][j] = (a[i - 1][j] + a[i][j - 1]) % MOD;
            //递推填充，每个位置的路径数为上面和左边的路径数的和，取模
        }
    }
    cout << a[n][m] << endl;
    return 0;
}