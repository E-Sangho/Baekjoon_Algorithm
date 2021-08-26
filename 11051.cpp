#include <iostream>

int p = 10007;
int dp[1001][1001];

using namespace std;

int C(int N, int K) {
    if(dp[N][K] != 0) return dp[N][K];
    if(N == K || K == 0) {
        dp[N][K] = 1;
        return 1;
    }
    dp[N][K] = (C(N-1, K) + C(N-1, K-1)) % p; 
    return dp[N][K];
}

int main() {
    int N, K;
    cin >> N >> K;
    cout << C(N, K) << endl;
}