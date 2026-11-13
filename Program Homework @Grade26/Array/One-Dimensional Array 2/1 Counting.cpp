#include <iostream>
using namespace std;

static int cnt[10001];
int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    for (int i = 10000; i >= 1; i--)
    {
        if (cnt[i] > 0)
        {
            cout << i << "-" << cnt[i] << endl;
        }
    }
    return 0;
}