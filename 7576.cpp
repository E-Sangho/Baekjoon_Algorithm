#include <iostream>
#include <queue>

using namespace std;

int N, M;
int arr[1000][1000];
bool visited[1000][1000];
int ans = 0, cnt = 0;
queue<pair<int, int>> q;

int idx[4] = {-1, 1, 0, 0};
int idy[4] = {0, 0, -1, 1};

void BFS()
{
    while(!q.empty())
    {
        pair<int, int> parent = q.front();
        int p_row = parent.first, p_column = parent.second;
        q.pop();
        for(int i = 0; i < 4; ++i)
        {
            int c_row = p_row + idx[i], c_column = p_column + idy[i];
            if(!visited[c_row][c_column] &&
                0 <= c_row && c_row < N &&
                0 <= c_column && c_column < M &&
                arr[c_row][c_column] == 0
                )
            {
                q.push({c_row, c_column});
                visited[c_row][c_column] = true;
                arr[c_row][c_column] = arr[p_row][p_column] + 1;
                ans = max(ans, arr[c_row][c_column] - 1);
                ++cnt;
            }
        }

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> M >> N;
    
    for(int n = 0; n < N; ++n)
    {
        for(int m = 0; m < M; ++m)
        {
            cin >> arr[n][m];
        }
    }

    for(int n = 0; n < N; ++n)
    {
        for(int m = 0; m < M; ++m)
        {
            if(arr[n][m] == 1)
            {
                q.push({n, m});
                visited[n][m] = true;
                ++cnt;
            }
            if(arr[n][m] == -1)
            {
                ++cnt;
            }
        }
    }
    BFS();
    if(cnt != M*N) cout <<  -1 << endl;
    else cout << ans;
}