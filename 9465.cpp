#include <iostream>
#include <algorithm>

using namespace std;

int sticker[100001][2];
int dp[100001][2];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;

        for(int j = 0; j < 2; ++j){
            for(int i = 0; i < n; ++i){
                cin >> sticker[i][j];
            }
        }
        
        dp[0][0] = sticker[0][0];
        dp[0][1] = sticker[0][1];
        dp[1][0] = sticker[1][0] + dp[0][1];
        dp[1][1] = sticker[1][1] + dp[0][0];

        for(int i = 2; i < n; ++i){
            dp[i][0] = max(dp[i-1][1], max(dp[i-2][0], dp[i-2][1])) + sticker[i][0];
            dp[i][1] = max(dp[i-1][0], max(dp[i-2][0], dp[i-2][1])) + sticker[i][1];
        }
        cout << max(dp[n-1][0], dp[n-1][1]) << '\n';
    }
    return 0;
}