#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    int ans[T];
    for(int t = 0; t < T; ++t)
    {
        int N;
        cin >> N;
        vector<pair<int, int>> v(N);
        for(int n = 0; n < N; ++n)
        {
            cin >> v[n].first >> v[n].second;
        }
        sort(v.begin(), v.end());

        int member = 1, current_ranking = v[0].second;
        for(int i = 1; i < N; ++i)
        {
            if(v[i].second < current_ranking)
            {
                current_ranking = v[i].second;
                ++member;
            }
        }
        ans[t] = member;
    }
    for(int t = 0; t < T; ++t)
    {
        cout << ans[t] << '\n';
    }

    return 0;
}