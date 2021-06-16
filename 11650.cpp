#include <stdio.h>
#include <algorithm>
#include <string.h>

bool compare(int *A, int *B){
    if(A[0] == B[0]) return A[1] < B[1];
    else return A[0] < B[0]; 
}
int main(){
    int N;
    scanf("%d", &N);
    int arr[N][2];
    for(int i = 0; i < N; ++i){
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    std::sort(arr, arr + N - 1, compare);
    for(int i = 0; i < N; ++i){
        printf("%d %d", arr[i][0], arr[i][1]);
    }
}