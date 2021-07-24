#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    int mod = 10007, ans = 0;
    int dp[1001][10] = {0};
    for(int i = 1; i <= N; ++i)
    {
        for(int j = 0; j < 10; ++j)
        {
            if(i == 1) dp[i][j] = 1;
            else
            {
                for(int k = 9; k >= j; --k)
                {
                    dp[i][j] += dp[i-1][k] % mod; 
                }
            }
        }
    }
    for(int i = 0; i < 10; ++i)
    {
        ans += dp[N][i] % mod;
    }
    cout << ans % mod;
    return 0;
}