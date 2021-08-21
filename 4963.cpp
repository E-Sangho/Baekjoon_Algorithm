#include <iostream>
#include <stack>
#include <string.h>

using namespace std;
#define MAX_SIZE 50
int w, h;
int num_island = 0;
int arr[MAX_SIZE][MAX_SIZE];
bool visited[MAX_SIZE][MAX_SIZE];
int idx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int idy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool in_map(int row, int column)
{
    return (0 <= row && row < h && 0 <= column && column < w);
}

void DFS(int r, int c)
{
    stack<pair<int, int>> s;
    s.push({r, c});
    visited[r][c] = true;
    ++num_island;
    while(!s.empty())
    {
        int p_row = s.top().first;
        int p_col = s.top().second;
        s.pop();
        for(int i = 0; i < 8; ++i)
        {
            int c_row = p_row + idx[i];
            int c_col = p_col + idy[i];
            if(in_map(c_row, c_col) &&
                arr[c_row][c_col] == 1 &&
                !visited[c_row][c_col])
            {
                s.push({c_row, c_col});
                visited[c_row][c_col] = true;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(1)
    {
        cin >> w >> h;
        if(w == 0 && h == 0) break;
        for(int row = 0; row < h; ++row)
        {
            for(int column = 0; column < w; ++column)
            {
                cin >> arr[row][column];
            }
        }

        for(int row = 0; row < h; ++row)
        {
            for(int column = 0; column < w; ++column)
            {
                if(!visited[row][column] && arr[row][column] == 1)
                {
                    DFS(row, column);
                }
            }
        }
        cout << num_island << endl;

        memset(arr, 0, sizeof(arr));
        memset(visited, false, sizeof(visited));
        num_island = 0;
    }
}