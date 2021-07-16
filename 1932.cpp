#include <stdio.h>
#include <algorithm>

using namespace std;

int dp[500][500];

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; ++i){
        for(int j = 0; j <= i; ++j){
            scanf("%d", &dp[i][j]);
        }
    }

    for(int i = 1; i < n; ++i){
        dp[i][0] = dp[i-1][0] + dp[i][0];
        dp[i][i] = dp[i-1][i-1] + dp[i][i];
        for(int j = 1; j < i; ++j){
            dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + dp[i][j];
        }
    }

    int temp = dp[n-1][0];

    for(int i = 1; i < n; ++i){
        temp = max(temp, dp[n-1][i]);
    }
    printf("%d",temp);
    return 0;
}