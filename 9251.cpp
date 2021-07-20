#include <iostream>
#include <string>

using namespace std;

int dp[1001][1001];

int LCS(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();
    for(int x = 0; x < n; ++x) dp[x][0] = 0;
    for(int y = 0; y < m; ++y) dp[0][y] = 0;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            if(s1[i] == s2[j]){
                dp[i+1][j+1] = dp[i][j] + 1;
            }
            else if(dp[i][j+1] >= dp[i+1][j])
            {
                dp[i+1][j+1] = dp[i][j+1];
            }
            else dp[i+1][j+1] = dp[i+1][j];
        }
    }
    return dp[n][m];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    cout << LCS(s1, s2);

    return 0;
}