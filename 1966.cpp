#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i = 0; i < T; ++i)
    {
        int N, M;
        vector<int> order;
        queue<char> q;
        cin >> N >> M;
        for(char j = 0; j <= N; ++j)
        {
            int temp;
            cin >> temp;
            order.push_back(temp);
            q.push('A' + j);
        }

        while(!q.empty())
        {
            if(order.front() > order[M])
            {
                order.erase(order.begin());
                q.pop();
            }
            else if(order.front() < order[M]);
            {
                order.push_back(order.front());
                order.erase(order.begin());
                q.push(q.front());
                q.pop();
            }
        }
    }
    

    return 0;
}