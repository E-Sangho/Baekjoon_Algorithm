#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    int A[N], front_len[1000] = {0}, back_len[1000] = {0}, bitonic_len = 0;
    for(int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            if(A[j] < A[i])
            {
                front_len[i] = max(front_len[i], front_len[j]);
            }
            if(A[N-1-j] < A[N-1-i])
            {
                back_len[N-1-i] = max(back_len[N-1-i], back_len[N-1-j]);
            }
        }
        ++front_len[i];
        ++back_len[N-1-i];
    }
    
    for(int i = 0; i < N; ++i)
    {
        bitonic_len = max(bitonic_len, front_len[i] + back_len[i]);
    }

    cout << bitonic_len - 1;
    return 0;
}