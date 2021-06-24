#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string s_in;
    cin >> N;

    queue<int> q;

    for(int i = 0; i < N; ++i)
    {
        cin >> s_in;
        if(s_in == "push")
        {
            int temp;
            cin >> temp;
            q.push(temp);
        }
        else if(s_in == "pop")
        {
            if(q.empty()) cout << -1 << '\n';
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if(s_in == "size")
        {
            cout << q.size() << '\n';
        }
        else if(s_in == "empty")
        {
            cout << (int)q.empty() << '\n';
        }
        else if(s_in == "front")
        {
            if(q.empty()) cout << -1 << '\n';
            else
            {
                cout << q.front() << '\n';
            }
        }
        else if(s_in == "back")
        {
            if(q.empty()) cout << -1 << '\n';
            else
            {
                cout << q.back() << '\n';
            }
        }
    }
    return 0;
}