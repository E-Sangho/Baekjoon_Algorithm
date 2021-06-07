#include <stdio.h>

int main(){
    int input1 = 0, input2 = 0;
    scanf("%d %d", &input1, &input2);
    input1 = 100 * (input1 % 10) + 10 * ((input1 % 100) / 10) + input1 / 100;
    input2 = 100 * (input2 % 10) + 10 * ((input2 % 100) / 10) + input2 / 100;
    if(input1 > input2) printf("%d", input1);
    else printf("%d", input2);

}