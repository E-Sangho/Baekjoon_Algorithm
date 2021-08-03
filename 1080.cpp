#include <stdio.h>

using namespace std;

int A[50][50], B[50][50];

void change(int i, int j)
{
    for(int x = i; x < i + 3; ++x){
        for(int y = j; y < j + 3; ++y)
        {
            if(A[x][y] == 1) A[x][y] = 0;
            else if(A[x][y] == 0) A[x][y] = 1;
        }
    }
}

bool check_matrix(int i, int j)
{
    for(int x = 0; x < i; ++x){
        for(int y = 0; y < j; ++y)
        {     
            if(A[x][y] != B[x][y]) return false;
        }
    }
    return true;    
}

int main(){

    int N, M, ans = 0;
    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            scanf("%1d", &A[i][j]);
        }
    }
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            scanf("%1d", &B[i][j]);
        }
    }

    for(int i = 0; i < N - 2; ++i){
        for(int j = 0; j < M - 2; ++j){
            if(A[i][j] != B[i][j]){
                change(i, j);
                ++ans;
            }
        }
    }
    if(!check_matrix(N, M)){
        ans = -1;
    }

    printf("%d", ans);

    return 0;
}