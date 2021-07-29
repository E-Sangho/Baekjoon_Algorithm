#include <stdio.h>

using namespace std;

int main()
{
    int sign = 1, number = 0, ans = 0;
    char oper;
    scanf("%d", &number);
    while(scanf("%c", &oper) != EOF)
    {
        ans = ans + number * sign;
        if(oper == '-') sign = -1;
        scanf("%d", &number);
    }
    printf("%d", ans);
    return 0;
}