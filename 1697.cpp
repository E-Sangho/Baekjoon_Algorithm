#include <iostream>
#include <queue>

using namespace std;

bool visited[100001] = {false,};

void BFS(int subin, int sister)
{
    queue<pair<int, int>> graph;
    graph.push({subin, 0});
    visited[subin] = true;
    if(graph.front().first == sister)
    {
        cout << graph.front().second;
        return;   
    }
    while(!graph.empty())
    {
        pair<int, int> x = graph.front();
        graph.pop();
        if(x.first-1 == sister || x.first+1 == sister || 2*x.first == sister)
        {
            cout << x.second + 1;
            return;
        }
        if(0< x.first && x.first - 1<= 100000 && !visited[x.first-1])
        {
            graph.push({x.first-1, x.second + 1});
            visited[x.first-1] = true;
        } 
        if(x.first + 1 <= 100000 && !visited[x.first+1])
        {
            graph.push({x.first+1, x.second + 1});
            visited[x.first+1] = true;
        } 
        if(2*x.first <= 100000 && !visited[2*x.first])
        {
            graph.push({2*x.first, x.second + 1});
            visited[2*x.first] = true;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;
    BFS(N, K);
}