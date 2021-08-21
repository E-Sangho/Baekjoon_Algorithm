#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp;
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int n = 0; n < N; ++n){
        for(int m = 0; m < N; ++m){
            cin >> temp;
            if(pq.size() == N && temp <= pq.top()) continue;
            pq.push(temp);
            if(pq.size() > N) pq.pop();
        }
    }
    cout << pq.top();
}