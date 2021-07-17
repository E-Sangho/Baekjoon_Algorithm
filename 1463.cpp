#include <iostream>
#include <algorithm>

using namespace std;

int dp[1000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp;
    cin >> N;
    dp[1] = 0;
    for(int i = 2; i <=N; ++i){
        if(i % 3 ==0) temp = dp[i/3];
        else if(i % 2 ==0) temp = dp[i/2];
        else{
            temp = dp[i-1]; 
        }
        dp[i] = temp + 1;
    }
    cout << dp[N];
    return 0;
}
/*
 *  1 = 1
 *  2 = 2
 *  3 = 2
 *  4 = 3
 *  5 = 4
 *  6 = 3
 *  7 = 4
 *  8 = 4
 *  9 = 3
 * 
 * case #1) N is divided by 3   dp[N/3] + 1
 * case #2) N is divided by 2   dp[N/2] + 1
 * case #3) N is non-dividable by 2 or 3    dp[N-1] + 1
 *
 */