#include <iostream>
#include <vector>

using namespace std;
vector<int> edge[1001];
bool visited[1001];
void DFS(int p)
{
    if(!visited[p])
    {
        visited[p] = true;
        for(auto i : edge[p])
        {
            if(!visited[i])
            {
                DFS(i);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, u, v, cnt = 0;
    cin >> N >> M;
    for(int m = 0; m < M; ++m)
    {
        cin >> u >> v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    for(int n = 1; n <= N; ++n)
    {
        if(!visited[n])
        {
            ++cnt;
            DFS(n);
        }
    }   
    cout << cnt;
    return 0;
}