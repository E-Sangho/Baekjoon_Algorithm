#include <stdio.h>
#include <string.h>
int main(){
    char input[15];
    scanf("%s", input);
    int sum = 0;
    int length = strlen(input);
    for(int i = 0; i < length; ++i){
        if('A' <= input[i] && input[i] <= 'O') sum += (input[i] - 'A') / 3 + 3;
        else if('P' <= input[i] && input[i] <= 'S') sum += 8;
        else if('T' <= input[i] && input[i] <= 'V') sum += 9;
        else if('W' <= input[i] && input[i] <= 'Z') sum += 10;
    }
    printf("%d", sum);
}