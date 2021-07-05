#include <iostream>

using namespace std;

int p = 1e9 + 7;

long long power(long long a, long long b)
{
    if(b == 0) return 1;
    
    long long ans = power(a, b / 2);
    ans = (ans * ans) % p;

    if(b % 2 != 0) ans = (ans * a) % p;

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, K;
    cin >> N >> K;

    long long A = 1, B = 1;
    if(N - K < K)  K = N - K;
    for(int n = N-K+1; n <= N; ++n)
    {
        A *= n;
        A %= p;
    }

    for(int k = 1; k <= K; ++k)
    {
        B *= k;
        B %= p;
    }

    long long cal = A * power(B, p-2);
    cal %= p;
    cout << cal;
    
    return 0;
}