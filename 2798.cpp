#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[100], sum = 0, max = 0;
    for(int i = 0; i < N; ++i){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < N; ++i){
        for(int j = i + 1; j < N; ++j){
            for(int k = j + 1; k < N; ++k){
                sum = arr[i] + arr[j]+ arr[k];
                if(sum <= M && max < sum){
                    max = sum;
                }
            }
        }
    }
    printf("%d", max);
}