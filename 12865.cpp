#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;
    int W[N], V[N], dp[N];
    int min_value = 1001;
    int memo_weight;
    for(int n = 0; n < N; ++n)
    {
        cin >> W[n] >> V[n];
    }
    for(int i = 0; i < N; ++i)
    {
        if(dp[i-1] + W[i] <= K)
        {
            dp[i] = dp[i-1] + W[i];
        }
        else if(min_value < V[i])
        {

        }
    }

    return 0;
}