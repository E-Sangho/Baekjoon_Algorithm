#include <iostream>

using namespace std;

int N, M;
bool visited[9]{0};
int arr[9]{0};

void backtrack(int cnt){
    if(cnt == M){
        for(int i = 0; i < M; ++i){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= N; ++i){
        if(!visited[i]){
            visited[i] = true;
            arr[cnt] = i;
            backtrack(cnt + 1);
            visited[i] = false;
        }
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    int cnt = 0;
    backtrack(cnt);
}