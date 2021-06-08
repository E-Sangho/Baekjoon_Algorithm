#include <stdio.h>

int main(){
    int A, B, V, day = 0;
    scanf("%d %d %d", &A, &B, &V);
    V -= A;
    if(V % ( A - B ) == 0){
        day = V / ( A - B ) + 1;
    }
    else{
        day = V / ( A - B ) + 2; 
    }
    printf("%d", day);
}

/* V - A + B
 *   ...
 * V - n(A - B) - A < 0 : day = n + 1
 * V - n(A - B) - A = 0 : day = n + 1
 */