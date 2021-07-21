#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int input[n], dp[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> input[i];
    }
    dp[0] = input[0];
    int global_max = dp[0];
    for(int i = 1; i < n; ++i)
    {
        if(dp[i-1] < 0){
            dp[i] = input[i];
        }
        else{
            dp[i] = dp[i-1] + input[i];
        }
        global_max = max(global_max, dp[i]);
    }
    cout << global_max;
    return 0;
}