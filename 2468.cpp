#include <iostream>
#include <string.h>

using namespace std;

int arr[100][100];
int N;
bool visited[100][100];

int idx[4] = {0, 0, -1, 1};
int idy[4] = {-1, 1, 0, 0};

void DFS(int i, int j, int h)
{
    visited[i][j] = true;
    for(int k = 0; k < 4; ++k){
        int r = i + idx[k];
        int c = j + idy[k];
        if(!visited[r][c] &&
            0 <= r && r < N &&
            0 <= c && c < N &&
            arr[r][c] > h)
            DFS(r, c, h);
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int max_height = 0, ans = 0;
    cin >> N;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> arr[i][j];
            max_height = max(max_height, arr[i][j]);
        }
    }
    for(int h = 0; h < max_height; ++h){
        memset(visited, false, sizeof(visited));
        int cnt = 0;
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                if(!visited[i][j] && arr[i][j] > h){
                    DFS(i, j, h);
                    ++cnt;
                }   
            }
        }
       
        ans = max(ans, cnt);
    }
    cout << ans;
}