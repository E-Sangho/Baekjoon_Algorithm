#include <stdio.h>

using namespace std;

int main()
{
    int n, k;
    int input[100];
    int dp[10001] = {0};

    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; ++i) scanf("%d", &input[i]);
        
    dp[0] = 1;

    for(int i = 0; i < n; ++i)
    {
        for(int j = 1; j <= k; ++j)
        {
            if(input[i] <= j)
            {
                dp[j] += dp[j - input[i]];
            }
        }
    }
    printf("%d", dp[k]);
    return 0;
}