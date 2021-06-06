#include <stdio.h>
#include <string.h>
int main(){
    char input[101];
    char alphabet[26];
    scanf("%s", input);
    int length = strlen(input);
    for(char i = 'A'; i <= 'Z' ; ++i){
        alphabet[i - 'A'] = -1;
        for(int j = 0; j < length; ++j){
            if('a' <= input[j]){
                input[j] -= 32;
            }
            if(input[j] == i){
                alphabet[i - 'A'] = j;
                break;
            }
        }
    }
    for(int i = 0; i < 26; ++i){
        printf("%d ", alphabet[i]);
    }
    
}