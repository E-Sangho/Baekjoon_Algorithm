#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    int p[N+1], dp[N+1];
    for(int i = 1; i <= N; ++i)
    {
        cin >> p[i];
    }
    for(int i = 1; i <= N; ++i)
    {
        dp[i] = p[i];
        for(int j = 1; j < i; ++j)
        {
            dp[i] = max(dp[i], dp[j] + dp[i-j]);
        }
    }
    cout << dp[N];
    return 0;
}