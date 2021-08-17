#include <iostream>
#include <queue>

using namespace std;

struct compare_list{
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if(a.second == b.second) return a.first < b.first;
        else return a.second > b.second; 
    }
};

struct compare_chosen{
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if(a.first == b.first) return a.second < b.second;
        else return a.first > b.first; 
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<pair<int, int>, vector<pair<int, int>>, compare_list> list;
    priority_queue<pair<int, int>, vector<pair<int, int>>, compare_chosen> chosen;

    int N, M, K, v, c, level = 0, preference = 0;
    cin >> N >> M >> K;
    
    for(int i = 0; i < K; ++i)
    {
        cin >> v >> c;
        list.push(pair<int, int>(v, c));
    }

    for(int i = 0; i < K; ++i)
    {
        chosen.push(list.top());
        preference += list.top().first;
        level = max(level, list.top().second);
        list.pop();
        if(chosen.size() > N)
        {
            preference -= chosen.top().first;
            chosen.pop();
        }
        if(chosen.size() == N && preference >= M)
        {
            cout << level;
            return 0;
        }
    }
    
    if(preference < M)
    {
        cout << -1;
        return 0;
    }

}