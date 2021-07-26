#include <stdio.h>

using namespace std;

int max(const int &a, const int &b)
{
    return a > b? a : b;
}

int main()
{
    int N;
    scanf("%d", &N);
    int A[N], dp[1000] = {0}, ans = 0;
    for(int n = 0; n < N; ++n)
    {
        scanf("%d", &A[n]);
    }
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            if(A[j] > A[i])
            {
                dp[i] = max(dp[i], dp[j]);
            }
        }
        ++dp[i];
        ans = max(ans, dp[i]);
    }
    printf("%d", ans);
    
    return 0;
}