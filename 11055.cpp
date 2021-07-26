#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int A[N], dp[1000] = {0}, ans = 0;
    for(int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    dp[0] = A[0];
    ans = A[0];
    for(int i = 1; i < N; ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            if(A[j] < A[i])
            {
                dp[i] = max(dp[i], dp[j]);
            }
        }
        dp[i] += A[i]; 
        ans = max(ans, dp[i]);
    }

    cout << ans;
    return 0;
}