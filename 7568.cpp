#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int arr[2 * N], rank[N];

    for(int i = 0; i < N; ++i){
        rank[i] = 0;
    }

    for(int i = 0; i < N; ++i){
        scanf("%d %d", &arr[i], &arr[i + N]);
    }

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            if(arr[i] < arr[j] && arr[i + N] < arr[j + N]){
                ++rank[i];
            }
        }
    }

    for(int i = 0; i < N; ++i){
        printf("%d ", rank[i] + 1);
    }
}