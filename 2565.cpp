#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(vector<int> &a, vector<int> &b)
{
    return a[0] < b[0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, len = 0;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(2));
    int dp[n];

    for(int i = 0; i < n; ++i)
    {
        cin >> v[i][0] >> v[i][1];
    }
    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        for(int j = 0; j < i; ++j)
        {
            if(v[i][1] > v[j][1])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        len = max(len, dp[i]);
    }
    cout << n - len;   

    return 0;
}