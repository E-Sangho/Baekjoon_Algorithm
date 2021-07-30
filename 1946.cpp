#include <iostream>
#include <vector>

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
        vector<int> v(N+1);
        int document, interview;
        for(int n = 0; n < N; ++n)
        {
            cin >> document >> interview;
            v[document] = interview;
        }

        int member = 1, current_ranking = v[1];
        for(int i = 2; i <= N; ++i)
        {
            if(v[i] < current_ranking)
            {
                current_ranking = v[i];
                ++member;
            }
        }
        cout << member << '\n';
    }

    return 0;
}