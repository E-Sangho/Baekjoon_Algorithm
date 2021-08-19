#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, a, b;

    priority_queue<int, vector<int>, greater<int>> queue;


    cin >> N >> M;

    int in_degree[N+1];
    vector<int> edge[N+1];
        
    for(int i = 0; i <= N; ++i)
    {
        in_degree[i] = 0;
    }

    for(int m = 0; m < M; ++m)
    {
        cin >> a >> b;
        edge[a].push_back(b);
        in_degree[b]++;
    }
    
    for(int i = 1; i <= N; ++i)
    {
        if(!in_degree[i])
        {
            queue.push(i);
        }
    }
    
    while(!queue.empty())
    {
        int vec = queue.top();
        queue.pop();
        cout << vec << " ";
        for(int i : edge[vec])
        {
            in_degree[i]--;
            if(!in_degree[i])
            {
                queue.push(i);
            }
        }
    }
}
