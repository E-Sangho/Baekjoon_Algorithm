#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<long long, vector<long long>, greater<long long>> pq;
    long long n, m, temp;
    long long ans = 0;
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        cin >> temp;
        pq.push(temp);
    }
    while(m--){
        long long first = pq.top();
        pq.pop();
        long long second = pq.top();
        pq.pop();
        pq.push(first + second);
        pq.push(first + second);
    }
    while(!pq.empty()){
        ans += pq.top();
        pq.pop();
    }
    cout << ans;
}