#include <stdio.h>

int main(){
    int N, num = 0;
    scanf("%d", &N);
    while(N > 0){
        if(N % 5 == 0){
            N -= 5;
            ++num;
        }
        else{
            N -= 3;
            ++num;
        }
    }
    if(N == 0){
        printf("%d", num);
    }
    else{
        printf("%d", -1);
    }
}