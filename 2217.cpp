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
    
    int N, ans = 0;
    cin >> N;
    int W[N];
    for(int i = 0; i < N; ++i) cin >> W[i];
    sort(W, W + N, compare);
    for(int i = 0; i < N; ++i)
    {
        if(ans < W[i] * (i+1))
        {
            ans = W[i] * (i+1) ;
        }
    }
    cout << ans;
    return 0;
}