#include <stdio.h>

using namespace std;

int fibo[41];

int fibonacci(const int &n)
{
    if(fibo[n] != 0) return fibo[n];
    else if(n <= 0){
        fibo[0] = 0;
        return 0;
    } 
    else if(n == 1)
    {
        fibo[1] = 1;
        return 1;
    } 
    else{
        return fibo[n] = fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int T, N;
    scanf("%d",&T);
    for(int t = 0; t < T; ++t)
    {
        scanf("%d", &N);
        if(N == 0) printf("%d %d\n", 1, 0);
        else if(N == 1) printf("%d %d\n", 0, 1);
        else{
            printf("%d %d\n", fibonacci(N-1), fibonacci(N));
        }
    }
} 