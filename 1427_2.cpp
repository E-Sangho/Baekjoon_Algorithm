#include <stdio.h>
#include <algorithm>

bool compare(int a, int b){
    return b < a;
}

int main(){
    char arr[11];
    int i;
    for(i = 0; i < 10; ++i){
        char c = getchar();
        if(c == '\n'){
            arr[i] = 0;
            break;
        }
        arr[i] = c;
    }
    std::sort(arr, arr + i, compare);
    printf("%s", arr);
}