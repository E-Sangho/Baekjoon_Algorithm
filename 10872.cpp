#include <stdio.h>

int main(){
    int N, answer = 1;
    scanf("%d", &N);
    for(int i = 1; i <= N; ++i){
        answer *= i;
    }
    printf("%d", answer);
}