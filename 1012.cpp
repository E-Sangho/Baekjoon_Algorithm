#include <iostream>
#include <queue>

using namespace std;

int idx[4] = {-1, 1, 0, 0};
int idy[4] = {0, 0, -1, 1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, M, N, K;
    cin >> T;
    for(int t = 0; t < T; ++t)
    {
        cin >> M >> N >> K;
        int arr[M][N];
        bool visited[M][N];
        for(int p = 0; p < M; ++p){
            for(int q = 0; q < N; ++q)
            {
                arr[p][q] = 0;
                visited[p][q] = false;
            }
        }
        
        int x, y, count = 0;
        for(int k = 0; k < K; ++k)
        {
            cin >> x >> y;
            arr[x][y] = 1;
        }

        for(int a = 0; a < M; ++a){
            for(int b = 0; b < N; ++b)
            {
                if(!visited[a][b] && arr[a][b] == 1)
                {
                    queue<pair<int, int>> queue;
                    queue.push({a, b});
                    visited[a][b] = true;
                    ++count;
                    while(!queue.empty())
                    {
                        pair<int, int> parent = queue.front();
                        queue.pop();
                        int p_row = parent.first;
                        int p_column = parent.second;
                        for(int i = 0; i < 4; ++i)
                        {
                            int c_row = p_row + idx[i];
                            int c_column = p_column + idy[i];

                            if(!visited[c_row][c_column] &&
                                0 <= c_row && c_row < M &&
                                0 <= c_column && c_column < N &&
                                arr[c_row][c_column] == 1)
                            {
                                queue.push({c_row, c_column});
                                visited[c_row][c_column] = true;
                            }
                        }
                    }
                }
            }
        }
        cout << count << '\n';
    }
}