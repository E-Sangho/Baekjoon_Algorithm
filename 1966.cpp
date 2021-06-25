#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const int i, const int j)
{
    return i > j;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    for(int i = 0; i < T; ++i)
    {
        int N, M, count = 0;
        cin >> N >> M;
        queue<int> q;
        queue<int> letter;
        vector<int> v;
        for(int j = 0; j < N; ++j)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
            q.push(temp);
            letter.push(j);
        }
        sort(v.begin(),v.end(), compare);
        while(!q.empty())
        {
            if(v.front() == q.front())
            {
                ++count;
                if(letter.front() == M)
                {
                    cout << count << '\n';
                    break;
                }
                v.erase(v.begin());
                q.pop();
                letter.pop();
            }
            else{
                q.push(q.front());
                q.pop();
                letter.push(letter.front());
                letter.pop();
            }
        }
    }
    return 0;
}