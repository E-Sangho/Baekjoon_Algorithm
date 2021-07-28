#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, ans = 0;
    scanf("%d", &N);
    vector<int> P(N);
    for(int i = 0; i < N; ++i)
    {
        scanf("%d", &P[i]);
    }
    sort(P.begin(), P.end());
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j <= i; ++j)
        {
            ans += P[j];
        }
    }
    printf("%d", ans);
    return 0;
}