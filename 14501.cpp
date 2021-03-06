#include <stdio.h>

using namespace std;

int maximize(const int &a, const int &b)
{
    return a > b ? a : b;
}

int main()
{
    int N;
    scanf("%d", &N);
    int T[N+1], P[N+1], dp[N+1], max = 0;   //dp[N]은 N일을 반드시 포함하면서 N일까지의 최댓값이다.
    for(int i = 1; i <= N; ++i) scanf("%d %d", &T[i], &P[i]);
    for(int i = 1; i <= N; ++i)
    {
        dp[i] = P[i];
        if(i + T[i] > N + 1) dp[i] = 0;
        else
        {
            for(int j = 1; j < i; ++j)
            {
                if(j + T[j] <= i) dp[i] = maximize(dp[i], dp[j] + P[i]);
            }
        }
        max = maximize(max, dp[i]);
    }
    printf("%d", max);
    return 0;
}