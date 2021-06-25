#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void josephus(const int &n, const int &k)
{

}

int main()
{
    int N, K, count = 1;
    cin >> N >> K;
    queue<int> q;
    vector<int> ans;

    for(int i = 1; i <= N; ++i)
    {
        q.push(i);
    }

    while(!q.empty())
    {
        if(count == K)
        {
            ans.push_back(q.front());
            q.pop();
            count = 1;
            
        }
        else
        {
            q.push(q.front());
            q.pop();
            ++count;
        }
    }

    cout << '<';
    for(int i = 0; i < N - 1; ++i)
    {
        cout << ans[i] << ", ";
    }
    cout << ans[N-1] << '>';

    return 0;
}