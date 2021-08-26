#include <iostream>
#define MAX_SIZE 13

using namespace std;

int lotto[MAX_SIZE];
int memory[6];
int K;

void dfs(int start, int depth) {
    if(depth == 6) {
        for(int i = 0; i < 6; ++i) {
            cout << memory[i] << " ";
        }
        cout << endl;
        return;
    }

    for(int i = start; i < K; ++i) {
        memory[depth] = lotto[i];
        dfs(i + 1, depth + 1);
    }
}

int main()
{
    while(1) {
        cin >> K;
        if(K == 0) break;
        for(int k = 0; k < K; ++k) {
            cin >> lotto[k];
        }
        dfs(0, 0);
        cout << endl;
    }
    return 0;
}