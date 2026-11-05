#include <bits/stdc++.h>
using namespace std;

bool is_prime(int num) 
{
    if (num < 2) 
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}

vector<int> generate_primes(int count) 
{
    vector<int> primes;
    int num = 2;
    while (primes.size() < count) 
    {
        if (is_prime(num)) 
        {
            primes.push_back(num);
        }
        num++;
    }
    return primes;
}

int main() 
{
    long long X; int N; cin >> X >> N;
    vector<int> primes = generate_primes(N);
    vector<long long> result(N, 0);
    long long current_x = X;
    for (int i = 0; i < N; i++) 
    {
        if (current_x == 0) 
        {
            continue; 
        }
        int p = primes[i];
        result[i] = current_x % p;
        current_x /= p;
    }
    for (int i = 0; i < N; i++) 
    {
        if (i > 0) 
        {
            cout << " ";
        }
        cout << result[i];
    }
    cout << endl;
    return 0;
}