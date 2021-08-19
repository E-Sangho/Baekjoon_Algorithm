#include <iostream>
#include <queue>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, K, m, v, c;
    long long ans = 0;
    cin >> N >> K;
    priority_queue<pair<int, int>> jewerlly;
    multiset<int> bag;
    for(int n = 0; n < N; ++n)
    {
        cin >> m >> v;
        jewerlly.push({v, m});
    }

    for(int k = 0; k < K; ++k)
    {
        cin >> c;
        bag.insert(c);
    }

    while(!bag.empty() && !jewerlly.empty())
    {
        multiset<int>::iterator iter = bag.lower_bound(jewerlly.top().second);
        
        if(iter != bag.end())
        {
            bag.erase(iter);
            ans += jewerlly.top().first;
            jewerlly.pop();
        }
        else jewerlly.pop();
    }
    cout << ans;
}