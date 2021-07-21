#include <iostream>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int K;
    cin >> K;
    pair<int, int> dp[K+1];
    dp[0] = make_pair(1,0);
    for(int i = 1; i <= K; ++i)
    {
        dp[i] = make_pair(dp[i-1].second, dp[i-1].first + dp[i-1].second);
    }
    cout << dp[K].first << " " << dp[K].second;

    return 0;
}