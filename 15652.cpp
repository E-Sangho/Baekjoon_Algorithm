#include <iostream>
#include <vector>

using namespace std;

void backTrack(int height, int N, int M, int * arr) {
    if(height == M) {
        for(int i = 0; i < M; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    for(int i = 1; i <= N; ++i) {
        if(arr[0] == 0 || arr[height-1] <= i) {
            arr[height] = i;
            backTrack(height+1, N, M, arr);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    int arr[M];
    fill(arr, arr + M, 0);
    backTrack(0, N, M, arr);
    return 0;
}