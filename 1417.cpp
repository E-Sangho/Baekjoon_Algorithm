#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, dasom, ans = 0;
    priority_queue<int> pq;    
    cin >> N;
    cin >> dasom;
    for(int n = 1; n < N; ++n){
        int temp;
        cin >> temp;
        pq.push(temp);
    }
    while(!pq.empty() && dasom <= pq.top()){
        ++dasom;
        ++ans;
        int temp = pq.top();
        pq.pop();
        pq.push(temp-1);
    }
    cout << ans;
}