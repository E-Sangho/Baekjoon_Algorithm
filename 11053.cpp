#include <iostream>

using namespace std;

int A[1001];

void length(const int &n, const int &N, int &max_len)
{
    int temp = A[n], len = 1;
    for(int i = n + 1; i <= N; ++i){
        if(temp < A[i]){
            temp = A[i];
            ++len;
        }
    }
    if(len > max_len) max_len = len;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, max_len = 0;
    cin >> N;

    for(int i = 1; i <= N; ++i)
    {
        cin >> A[i];
    }
    for(int i = 1; i <= N; ++i)
    {
        length(i, N, max_len);
    }

    cout << max_len;
    return 0;
}