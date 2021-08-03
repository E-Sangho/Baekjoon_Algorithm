#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int N, L;
   scanf("%d %d", &N, &L);
    int input[N], start = -2000, ans = 0;

    for(int n = 0; n < N; ++n){
        scanf("%d", &input[n]);
    }

    sort(input, input + N);

    for(int n = 0; n < N; ++n){
        if(input[n] - start > L - 1){
            start = input[n];
            ++ans;
        }
    }
    printf("%d", ans);
    return 0;
}