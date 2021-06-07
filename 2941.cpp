#include <stdio.h>
#include <string.h>

int main(){
    char input[101];
    int num = 0;
    scanf("%s", input);
    int length = strlen(input);
    int i = 0;
    while(i < length){
        if(input[i] == 'c' && (input[i+1] == '=' || input[i+1] == '-')){
            i += 2;
            ++num;
        }
        else if(input[i] == 'd' && input[i+1] == 'z' && input[i+2] == '='){
            i += 3;
            ++num;
        }
        else if(input[i] == 'd' && input[i+1] == '-'){
            i += 2;
            ++num;
        }
        else if((input[i] == 'l' || input[i] == 'n')  && input[i+1] == 'j'){
            i += 2;
            ++num;
        }
        else if((input[i] == 's' || input[i] == 'z') && input[i+1] == '='){
            i += 2;
            ++num;
        }
        else{
            ++i;
            ++num;
        }
    }
    printf("%d", num);
}