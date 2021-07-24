#include <stdio.h>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int input[100];
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &input[i]);
    }
    int dp[10001] = {0};
    int temp[10001] = {0};
    dp[0] = 1;

    for(int j = 1; j <= k; ++j)
    {
        if(j % input[0] == 0) dp[j] = 1;
    }
    for(int i = 1; i < n; ++i)
    {
        for(int j = 1; j <= k; ++j)
        {
            temp[j] = 0;
        }

        for(int j = 1; j <= k; ++j)
        {
            if(input[i] <= j)
            {
                int count = 0;
                
                while(j - input[i] * count >= 0)
                {
                    temp[j] += dp[j - input[i] * count];
                    ++count;
                }
            }
            else
            {
                temp[j] = dp[j];
            }
        }
        for(int j = 1; j <= k; ++j)
        {
            dp[j] = temp[j];
        }
    }
    printf("%d", dp[k]);
    return 0;
}