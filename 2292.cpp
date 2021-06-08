#include <stdio.h>

int main(){
    int N, count = 0;
    scanf("%d", &N);
    if(N == 1) count = 0;
    else{
        while(1 + count*(count + 1) * 3 < N){
            ++count;
        }
    }
    printf("%d", count + 1);
}
