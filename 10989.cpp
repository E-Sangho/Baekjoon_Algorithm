#include <stdio.h>

int main(){
    int N, temp = 0, max = 0;
    scanf("%d", &N);
    int C[10001] = {0,};
    for(int i = 0; i < N; ++i){
        scanf("%d", &temp);
        ++C[temp];
        if(temp > max) max = temp; 
    }
    for(int i = 0; i <= max; ++i){
        for(int j = 0; j < C[i]; ++j){
            printf("%d\n", i);       
        }
    }
}

