#include <iostream>

using namespace std;

int N, M;
int arr[7] = {0,};

void backTrack(int height) {
    if(height == M) {
        for(int i = 0; i < M; ++i) {
            cout << arr[i] << " ";
        }
        cout << '\n';
        return;
    }

    for(int i = 1; i <= N; ++i) {
        arr[height] = i;
        backTrack(height + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    backTrack(0);
    return 0;
}
