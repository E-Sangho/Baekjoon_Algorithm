#include <iostream>
#include <algorithm>

using namespace std;

bool compare(const int a, const int b)
{
    return a > b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, number = 0, ans = 0;
    cin >> N;
    int W[N];
    for(int i = 0; i < N; ++i) cin >> W[i];
    sort(W, W + N, compare);
    ans = W[0];
    number = 1;
    for(int i = 1; i < N; ++i)
    {
        if(ans < W[i] * (number+1))
        {
            ++number;
            ans = W[i] * (number) ;
        }
        else break;
    }
    cout << ans;
    return 0;
}