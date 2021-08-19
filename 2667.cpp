#include <stdio.h>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;
int N, temp;
int arr[25][25];
bool visited[25][25];
vector<int> ans;

int idx[4] = {-1, 1, 0, 0};
int idy[4] = {0, 0, -1, 1};

bool inSquare(int row, int column)
{
    if(0 <= row && row < N && 0 <= column && column < N)
    {
        return true;
    }
    else return false;
}

void dfs(int row, int column)
{
    if(arr[row][column] == 1 && visited[row][column] == false)
    {
        int count = 0;
        stack<pair<int, int>> stack;
        stack.push({row, column});
        while(!stack.empty())
        {
            row = stack.top().first;
            column = stack.top().second;
            stack.pop();
            
            if(!visited[row][column])
            {
                visited[row][column] = true;
                ++count;
            }

            for(int i = 0; i < 4; ++i)
            {
                int child_row = row + idx[i];
                int child_column = column + idy[i];
               
                if(inSquare(child_row, child_column) && arr[child_row][child_column] == 1)
                {
                    if(!visited[child_row][child_column])
                    {
                        stack.push({child_row, child_column});
                    }
                }
            }
        }
        ans.push_back(count);
        count = 0;
    }
}

int main()
{
    scanf("%d", &N);
    
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            scanf("%1d", &arr[i][j]);
        }
    }
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j)
        {
            dfs(i, j);
        }
    }
    
    sort(ans.begin(), ans.end());
    printf("%d\n", ans.size());
    
    for(int i = 0; i < ans.size(); ++i)
    {
        printf("%d\n", ans[i]);
    }
}