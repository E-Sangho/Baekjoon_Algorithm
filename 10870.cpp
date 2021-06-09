#include <stdio.h>

int main(){
    int fibonaci[21];
    fibonaci[0] = 0;
    fibonaci[1] = 1;
    for(int i = 2; i < 21; ++i){
        fibonaci[i] = fibonaci[i-1] + fibonaci[i-2];
    }
    int n;
    scanf("%d", &n);
    printf("%d", fibonaci[n]);
}