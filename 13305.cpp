#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    long long ans = 0;
    cin >> N;
    long long price[N];
    int length[N-1];
    for(int i = 0; i < N-1; ++i) cin >> length[i];
    for(int i = 0; i < N; ++i) cin >> price[i];

    for(int i = 0; i < N - 1; ++i)
    {
        int present = i;
        ans += length[i] * price[present];
        while(price[present] < price[i+1] && i < N - 2)
        {
            ans += length[i+1] * price[present];
            ++i;
        }
    }
    cout << ans;
    return 0;
}