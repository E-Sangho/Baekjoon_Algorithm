#include <iostream>

using namespace std;

int glass[10001];
int dp[10001];
int ans = 0;

int max(const int x, const int y){
    return x > y ? x : y;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> glass[i];
    }
    dp[1] = glass[1];
    dp[2] = glass[1] + glass[2];
    for(int i = 3; i <= n; ++i){
        dp[i] = max(glass[i-1] + dp[i-3], dp[i-2]) + glass[i];
        dp[i] = max(dp[i-1], dp[i]);
    }
    cout << dp[n];
    return 0;
}