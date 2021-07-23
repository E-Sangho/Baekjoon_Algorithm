#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int C[n][k];
    
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < k; ++j)
        {
            if(i == j || j == 0) C[i][j] = 1;
            else
            {
                C[i][j] = C[i-1][j] + C[i-1][j-1];
            }
        }
    }
    cout << C[n-1][k-1];
    return 0;
}