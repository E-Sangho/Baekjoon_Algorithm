#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, a;
    priority_queue<int> pq;

    cin >> n;
    while(n--){
        cin >> a;
        if(a == 0)
        {
            if(pq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else
        {
            while(a--)
            {
                int temp;
                cin >> temp;
                pq.push(temp);
            }
        }
    }
}