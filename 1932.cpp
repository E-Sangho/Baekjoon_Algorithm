#include <iostream>

using namespace std;

int triangle[500][500];
int dp[500][500];

int max(const int &x, const int &y){
    return x > y ? x : y;
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j <= i; ++j){
            cin >> triangle[i][j];
        }
    }

    dp[0][0] = triangle[0][0];
    dp[1][0] = triangle[0][0] + max(triangle[1][0], triangle[1][1]);
    for(int i = 1; i < n; ++i){
        for(int j = 0; j < i; ++j){
            dp[i+1][j] = dp[i][j] + max(triangle[i+1][j], triangle[i+1][j+1]);
            dp[i+1][j+1] = dp[i][j] + max(triangle[i+1][j+1], triangle[i+1][j+2]);
        }
    }

    int temp = dp[n-1][0];

    for(int i = 1; i < n - 1; ++i){
        temp = max(temp, dp[n-1][i]);
    }
    cout << temp;
    return 0;
}