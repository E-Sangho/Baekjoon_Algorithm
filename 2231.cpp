#include <stdio.h>

int dividesum(int &input){
    int arr[7] = {0}, temp = input, i = 0, result = input;
    while(temp > 0){
        arr[i] = temp % 10;
        ++i;
        temp /= 10;
    }
    for(int i = 0; i < 7; ++i){
        result += arr[i];
    }
    return result;
}

int main(){
    int N;
    scanf("%d", &N);
    int length = 0, temp = N;
    bool check = true;
    while(temp > 0){
        temp /= 10;
        ++length;
    }
    int start = N - length * 10;
    for(int i = start; i < N; ++i){
        if(dividesum(i) == N){
            printf("%d", i);
            check = false;
            break;
        }
    }
    if(check) printf("%d", 0);
}