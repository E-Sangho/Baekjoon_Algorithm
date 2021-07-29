#include <stdio.h>

using namespace std;

int main()
{
    int sign = 1, number = 0, ans = 0;
    char oper;

    while(1)
    {
        scanf("%d%c", &number, &oper);
        ans = ans + number * sign;
        if(oper == '-') sign = -1;
        else if(oper != '+') break;
    }
    printf("%d", ans);
    return 0;
}