#include <stdio.h>

using namespace std;

int main()
{
    int A, B, ans = 0;;
    scanf("%d %d", &A, &B);
    while(B > A)
    {
        if(B % 2 == 0){
            B /= 2;
            ++ans;
        }
        else if(B % 10 == 1){
            B /= 10;
            ++ans;
        }
        else{
            break;
        }
    }
    A == B ? printf("%d", ans + 1) : printf("%d", -1);

    return 0;
}