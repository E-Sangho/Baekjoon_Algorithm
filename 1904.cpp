#include <iostream>

using namespace std;

int tile[1000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    tile[1] = 1;
    tile[2] = 2;
    for(int i = 3; i <= N; ++i){
        tile[i] = (tile[i-1] + tile[i-2]) % 15746;
    }
    cout << tile[N];

    return 0;
}