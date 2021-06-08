#include <stdio.h>

int main(){
    int numerator = 1, denominator = 1, count = 0, X;
    scanf("%d", &X);
    while((count * (count + 1)) / 2 < X){
        ++count;
    }
    X -= (((count-1) * count) / 2 + 1);
    if(count % 2 == 0){
        numerator = 1;
        denominator = count;
        while(X != 0){
            ++numerator;
            --denominator;
            --X;
        }
    }
    else{
        numerator = count;
        denominator = 1;
        while(X != 0){
            --numerator;
            ++denominator;
            --X;
        }
    }
    printf("%d/%d",numerator,denominator);
}