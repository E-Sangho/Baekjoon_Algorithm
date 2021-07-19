#include <iostream>

using namespace std;

int A[1001];
int dp[1001];

int max(const int &a, const int &b)
{
    return a > b ? a : b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, max_len = 0;
    cin >> N;
    for(int i = 1; i <= N; ++i)
    {
        cin >> A[i];
    }
    for(int i = 1; i <= N; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            if(A[i] > A[j] && dp[j] > dp[i])
            {
                dp[i] = dp[j];
            }
        }
        ++dp[i];
        max_len = max(max_len, dp[i]);
    }
    cout << max_len;
    return 0;
}