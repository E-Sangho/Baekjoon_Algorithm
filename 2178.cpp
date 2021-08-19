#include <stdio.h>
#include <queue>

using namespace std;

int N, M;
int arr[100][100];
bool visited[100][100] = {false,};
int idx[4] = {-1, 1, 0, 0};
int idy[4] = {0, 0, -1, 1};

bool in_matrix(int row, int column)
{
    return (0 <= row && row < N && 0 <= column && column < M);
}

void BFS(int row, int column)
{
    queue<pair<int, int>> queue;
    queue.push({row, column});
    visited[row][column] = true;
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
            if(in_matrix(c_row, c_column) && arr[c_row][c_column] && !visited[c_row][c_column])
            {
                queue.push({c_row, c_column});
                visited[c_row][c_column] = true;
                arr[c_row][c_column] = arr[p_row][p_column] + 1;
            }
        }

    }
}

int main()
{ 
    scanf("%d %d", &N, &M);
    
    for(int n = 0; n < N; ++n){
        for(int m = 0; m < M; ++m){
            scanf("%1d", &arr[n][m]);
        }
    }
    BFS(0, 0);

    printf("%d", arr[N-1][M-1]);
}