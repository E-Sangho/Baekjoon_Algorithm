#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    long long dp[N];
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i < N; ++i)
    {
        dp[i] = 1;
        for(int j = 0; j < i - 1; ++j)
        {
            dp[i] += dp[j];    
        }
    }
    cout << dp[N-1];
    return 0;
}