#include <stdio.h>
#include <algorithm>
#include <string.h>

bool compare(char a, char b){
    return a > b;
}

int main(){
    char arr[11];
    scanf("%s", arr);
    std::sort(arr, arr + strlen(arr), compare);
    printf("%s", arr);
}