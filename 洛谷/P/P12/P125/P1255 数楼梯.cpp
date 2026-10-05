#include <bits/stdc++.h>
using namespace std;

typedef vector<int> BigInt;

static BigInt add(const BigInt &a, const BigInt &b)
{
    BigInt c;
    int carry = 0;
    static int len = max(a.size(), b.size());
    for (int i = 0; i < len || carry; ++i)
    {
        int sum = carry;
        if (i < a.size()) sum += a[i];
        if (i < b.size()) sum += b[i];
        c.push_back(sum % 10);
        carry = sum / 10;
    }
    return c;
}

// 记忆化数组，memo[i] 存储第 i 项斐波那契数
static vector<BigInt> memo;

static BigInt fib(int n)
{
    if (n == 1) return {1};
    if (n == 2) return {2};
    if (!memo[n].empty()) return memo[n];
    return memo[n] = add(fib(n-1), fib(n-2));
}

static void printBigInt(const BigInt &num)
{
    for (int i = num.size() - 1; i >= 0; --i)
    {
        cout << num[i];
    }
    cout << endl;
}

int main()
{
    int N;
    cin >> N;
    memo.resize(N + 1);
    printBigInt(fib(N));
    return 0;
}