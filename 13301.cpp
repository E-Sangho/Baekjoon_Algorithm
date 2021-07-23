#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, ans;
    cin >> N;
    int dp[N];
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i < N; ++i)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    if(N == 1) ans = 4;
    else if(N == 2) ans = 6;
    else
    {
        ans = 2 * (2 * dp[N-1] + dp[N-2]);
    }
    cout << ans;
    return 0;
}