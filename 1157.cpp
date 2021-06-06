#include <stdio.h>
#include <string.h>
int main(){
    char a[1000001];
    int alphabet[26] = {0};
    scanf("%s", a);
    int length = strlen(a);
    for(int i = 0; i < length; ++i){// 알파벳 대문자로 바꾸기
        if('a' <= a[i]) a[i] = a[i] - 32;
            ++alphabet[a[i] - 'A'];
    }

    int max = 0, max_num = 0, position = 0;
    for(int i = 0; i < 26; ++i){
        if(max < alphabet[i]) max = alphabet[i];
    }

    for(int i = 0; i < 26; ++i){
        if(max == alphabet[i]){
            ++max_num;
            position = i;
        } 
    }

    printf("%c",(max_num > 1)? '?' : 'A' + position);
}