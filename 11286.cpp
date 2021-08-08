#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, x;
    priority_queue<int, vector<int>, greater<int>> pq_pos, pq_neg;

    cin >> N;
    while(N--){
        cin >> x;
        if(x > 0) pq_pos.push(x);
        else if(x < 0) pq_neg.push(-x);
        else{
            if(pq_pos.empty() && pq_neg.empty()) cout << "0\n";
            else if(pq_pos.empty()){
                cout << -pq_neg.top() << '\n';
                pq_neg.pop();
            }
            else if(pq_neg.empty()){
                cout << pq_pos.top() << '\n';
                pq_pos.pop();
            }
            else{
                if(pq_pos.top() < pq_neg.top()){
                    cout << pq_pos.top() << '\n';
                    pq_pos.pop();
                }
                else{
                    cout << -pq_neg.top() << '\n';
                    pq_neg.pop();
                }
            }
        }
    }

    return 0;
}