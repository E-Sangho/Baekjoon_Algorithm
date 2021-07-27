#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
{
    return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, ans = 1;
    cin >> N;
    vector<pair<int, int>> v(N);
    for(int n = 0; n < N; ++n)
    {
        cin >> v[n].first >> v[n].second;
    }
    sort(v.begin(), v.end(), compare);

    int s_time = v[0].first, e_time = v[0].second;
    for(int n = 1; n < N; ++n)
    {
        if(e_time <= v[n].first)
        {
            s_time = v[n].first;
            e_time = v[n].second;
            ++ans;
        }
    }
    cout << ans;
    return 0;
}