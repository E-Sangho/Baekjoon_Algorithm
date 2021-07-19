#include <iostream>

using namespace std;

int A[1001];
int dp[1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp, max_len = 0;
    cin >> N;
    for(int i = 1; i <= N; ++i)
    {
        cin >> A[i];
    }
    for(int i = 1; i <= N; ++i)
    {
        temp = 0;
        for(int j = 1; j <= i; ++j)
        {
            if(A[i] > A[j])
            {
                if(dp[j] > temp)
                {
                    temp = dp[j];
                }
            }
        }
        dp[i] = temp + 1;
        if(dp[i] > max_len) max_len = dp[i];
    }
    cout << max_len;
    return 0;
}