#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, price, min = 1e9 + 1;
    long long ans = 0;
    cin >> N;
    int length[N-1];
    for(int i = 0; i < N-1; ++i) cin >> length[i];

    for(int i = 0; i < N-1; ++i)
    {
        cin >> price;
        min = min < price ? min : price;
        ans += (long long)min * length[i];
    }
    cout << ans;
    return 0;
}