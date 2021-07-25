#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    int A[N], dp[N];
    for(int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    int ans = 0;
    for(int i = 0; i < N; ++i)
    {
        dp[i] = 1;
        for(int j = 0; j < i; ++j)
        {
            if(A[j] < A[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << ans;
    return 0;
}