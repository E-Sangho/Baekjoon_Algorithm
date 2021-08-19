#include <iostream>
#include <vector>

using namespace std;

int cnt = 0;
vector<int> edge[101];
bool visited[101] ={false,}; 

void DFS(int parent)
{
    visited[parent] = true;
    for(auto child : edge[parent]){
        if(!visited[child]){
            DFS(child);
            ++cnt;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num_com, num_pair, a, b;
    cin >> num_com >> num_pair;
    for(int i = 0; i < num_pair; ++i){
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    DFS(1);

    cout << cnt;
}