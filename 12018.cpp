#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, mileage = 0, ans = 0;
    cin >> n >> m;
    int P, L;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; ++i){
        cin >> P >> L;
        int temp;
        priority_queue<int, vector<int>, greater<int>> tempq;
        for(int p = 0; p < P; ++p){
            cin >> temp;
            tempq.push(temp);
        }
        if(P >= L){
            while(P > L){
                tempq.pop();
                --P;
            }
            pq.push(tempq.top());
        }
        else{
            pq.push(1);
        }
    }
    while(mileage + pq.top() <= m && ans < n){
        mileage += pq.top();
        ++ans;
        pq.pop();
    }
    cout << ans;
}