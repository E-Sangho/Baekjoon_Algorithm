#include <iostream>

using namespace std;

long long dp[101][10];    //dp[x][y]는 길이가 x이고 앞자리가 y인 수의 갯수 

int mod = 1000000000;

void stair(const int &n){
    for(int i = 1; i < 9; ++i){
        dp[n][i] = (dp[n-1][i-1] + dp[n-1][i+1]) % mod; 
    }
    dp[n][0] = dp[n-1][1] % mod; 
    dp[n][9] = dp[n-1][8] % mod;
}

int main()
{
    int N;
    long long sum = 0;
    cin >> N;
    for(int i = 0; i < 10; ++i){
        dp[1][i] = 1;
    }
    for(int n = 2; n <= N; ++n){
        stair(n);
    }
    for(int i = 1; i <= 9; ++i){
        sum += dp[N][i] % mod;
    }
    cout << sum % mod;
    return 0;
}