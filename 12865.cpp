#include <stdio.h>
#include <algorithm>

using namespace std;

int dp[100001];

int main()
{
    int N, K, W, V;
    scanf("%d %d", &N, &K);

    for(int n = 0; n < N; ++n)
    {
        scanf("%d %d", &W, &V);
        for(int j = K; j >= W; --j)
        {
            dp[j] = max(dp[j-W] + V, dp[j]);
        }
    }
    printf("%d", dp[K]);

    return 0;
}