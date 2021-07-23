#include <stdio.h>

using namespace std;
int dp[30][30];

int C(const int &n, const int &k)
{
    if(n == k) return 1;
    if(k == 0) return 1;
    if(dp[n][k] != 0) return dp[n][k];
    else
    {
        dp[n][k] = C(n-1, k-1) + C(n-1, k);
        return dp[n][k];
    }
}

int main()
{
    int T, N, M;
    scanf("%d", &T);
    for(int t = 0; t < T; ++t)
    {
        scanf("%d %d", &N, &M);
        printf("%d\n", C(M, N));
    }
    return 0;
}