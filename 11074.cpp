#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, K, ans = 0;
    cin >> N >> K;
    int A[N];
    for(int n = 0; n < N; ++n)
    {
        cin >> A[n];
    }
    for(int i = N-1; i >= 0; --i)
    {
        if(A[i] <= K)
        {
            ans += K / A[i];
            K = K - (K / A[i]) * A[i];
        }
    }
    cout << ans;
    return 0;
}