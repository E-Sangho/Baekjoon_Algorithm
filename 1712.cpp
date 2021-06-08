#include <stdio.h>

int main(){
    int A, B, C, n;
    scanf("%d %d %d", &A, &B, &C);
    if(C - B > 0){
        n = A / (C - B) + 1;
    }
    else if(C - B <= 0){
        n = -1;
    }
    printf("%d", n);
}