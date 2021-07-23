#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, mod = 10007;
    cin >> n;
    int dp[n];
    dp[0] = 1;
    dp[1] = 3;
    for(int i = 2; i < n; ++i)
    {
        dp[i] = (dp[i-1] + 2 * dp[i-2]) % mod;
    }
    cout << dp[n-1]; 
    return 0;
}