#include <iostream>

using namespace std;

int dp[201][201];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, K, mod = 1000000000;
    cin >> N >> K;
    
    for(int k = 1; k <= K; ++k)
    {
        dp[0][k] = 1;
    }
    for(int n = 1; n <= N; ++n)
    {
        for(int k = 0; k <= K; ++k)
        {
            if(k == 0) dp[n][k] = 0;
            else if(k == 1) dp[n][k] = 1;
            else
            {
                dp[n][k] = (dp[n][k-1] + dp[n-1][k]) % mod;
            }
        }
    }
    cout << dp[N][K];
    return 0;
}


// dp[n][k] = dp[n][k-1] + dp[n-1][k-1] + dp[n-2][k-1] + dp[n-3][k-1] ... + dp[1][k-1] + dp[0][k-1];
// dp[n-1][k] = dp[n-1][k-1] + ... + dp[0][k-1];
// dp[k][n] = dp[k-1][n] + ... + d[k-1][0];