#include <iostream>

using namespace std;

int main()
{
    int N, M, K;
    cin >> N >> M;
    int A[N][M];
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            cin >> A[i][j];
        }
    }

    cin >> M >> K;
    int B[M][K];
    for(int i = 0; i < M; ++i)
    {
        for(int j = 0; j < K; ++j)
        {
            cin >> B[i][j];
        }
    }
    int ans[N][K];
    for(int n = 0; n < N; ++n)
    {
        for(int k = 0; k < K; ++k)
        {
            int temp = 0;
            for(int j = 0; j < M; ++j)
            {
                temp += A[n][j] * B[j][k];
            }
            ans[n][k] = temp;
        }
    }
    for(int n = 0; n < N; ++n)
    {
        for(int k = 0; k < K - 1; ++k)
        {
            cout << ans[n][k] << ' ';
        }
        cout << ans[n][K-1] << '\n';
    }
    
    return 0;
}