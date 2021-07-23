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
    for(int i = 1; i < n; ++i)
    {
        if(i == 1) dp[i] = 2;
        else dp[i] = (dp[i-1] + dp[i-2]) % mod;
        
    }
    cout << dp[n-1];

    return 0;
}