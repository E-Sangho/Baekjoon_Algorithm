#include <iostream>
#include <vector>

using namespace std;

void backTrack(int height, int N, int M, bool *visited, vector<int> answer) {
    if(height == M) {
        for(int i = 0; i < M; ++i) {
            cout << answer[i] << " ";
        }
        cout << endl;
        return;
    }

    for(int i = 1; i <= N; ++i) {
        if(!visited[i] && (answer.empty() || answer.back() < i)) {
            visited[i] = true;
            answer.push_back(i);
            backTrack(height+1, N, M, visited, answer);
            visited[i] = false;
            answer.pop_back();
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
    bool visited[9]{0};
    vector<int> answer;
    backTrack(0, N, M, visited, answer);
    return 0;
}