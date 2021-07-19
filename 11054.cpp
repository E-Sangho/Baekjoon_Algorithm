#include <iostream>

using namespace std;

int A[1001];

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
    
    return 0;
}