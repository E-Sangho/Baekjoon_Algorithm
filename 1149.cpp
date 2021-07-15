#include <iostream>

using namespace std;
int color[1000][3];
int dp[1000][3];

int min(const int &a, const int &b){
    return a > b ? b : a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, R, G, B;
    cin >> N;
    for(int n = 0; n < N; ++n){
        cin >> color[n][0] >> color[n][1] >> color[n][2];
    }

    dp[0][0] = color[0][0];
    dp[0][1] = color[0][1];
    dp[0][2] = color[0][2];

    for(int n = 1; n < N; ++n){
        dp[n][0] = color[n][0] + min(dp[n-1][1], dp[n-1][2]);
        dp[n][1] = color[n][1] + min(dp[n-1][0], dp[n-1][2]);
        dp[n][2] = color[n][2] + min(dp[n-1][0], dp[n-1][1]);
    }

    cout << min(dp[N-1][0], min(dp[N-1][1], dp[N-1][2]));
}
