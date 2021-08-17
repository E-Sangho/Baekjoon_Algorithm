#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, H, T, count = 0;
    cin >> N  >> H >> T;

    priority_queue<int> pq;

    for(int i = 0; i < N; ++i)
    {
        int giant_Height;
        cin >> giant_Height;
        pq.push(giant_Height);
    }
    
    for(int i = 0; i < T; ++i)
    {
        int tallest = pq.top();
        if(tallest < H)
        {
            break;
        }

        if(tallest > 1)
        {
            ++count;
            pq.pop();
            pq.push(tallest / 2);
        }
    }

    if(pq.top() < H)
    {
        cout << "YES\n" << count << "\n";
    }
    else
    {
        cout << "NO\n" << pq.top() << "\n";
    }
}