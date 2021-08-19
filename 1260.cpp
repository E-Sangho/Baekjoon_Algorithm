#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void BFS(int parent, vector<int> adj[], bool visited[])
{
    queue<int> queue;
    queue.push(parent);
    while(!queue.empty())
    {
        parent = queue.front();
        queue.pop();

        if(!visited[parent])
        {
            visited[parent] = true;
            cout << parent << " ";
        }
        for(int i = 0; i < adj[parent].size(); ++i)
        {
            int child = adj[parent][i];
            if(!visited[child])
            {
                queue.push(child);
            }
        }
    }
}

void DFS(int parent, vector<int> adj[], bool visited[])
{
    visited[parent] = true;
    cout << parent << " ";
    for(int i = 0; i < adj[parent].size(); ++i)
    {
        int child = adj[parent][i];
        if(!visited[child])
        {
            DFS(child, adj, visited);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, V, v, w;

    cin >> N >> M >> V;
    
    vector<int> adj[1001];
    bool visited[1001];
    bool visited2[1001];

    for(int m = 0; m < M; ++m)
    {
        cin >> v >> w;
        adj[v].push_back(w);
        adj[w].push_back(v);
    }

    for(int i = 1; i <= N; ++i)
    {
        sort(adj[i].begin(), adj[i].end());
    }

    DFS(V, adj, visited);
    cout << '\n';
    BFS(V, adj, visited2);
}