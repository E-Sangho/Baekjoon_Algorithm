#include <stdio.h>

using namespace std;

int main()
{
    long long S, n = 0;
    scanf("%d", &S);
    while(!(n * (n + 1) <= 2 * S && 2 * S < (n + 1) * (n + 2)))
    {
        ++n;
    }
    printf("%d", n);
    return 0;
}