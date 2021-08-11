#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, N;
    cin >> A >> B >> N;
    int t, m;
    char c;
    priority_queue<int> pq_Sangmin, pq_Jisu;
    for(int n = 0; n < N; ++n){
        cin >> t >> c >> m;
        if(c == 'B'){
            for(int i = 1; i <= m; ++i){
                if(!pq_Sangmin.empty() && t >= pq_Sangmin.top()){
                    t += A;
                    pq_Sangmin.push(t);
                }
                else if(pq_Sangmin.empty()){
                    t += A;
                    pq_Sangmin.push(t);
                }
                else{
                    t = pq_Sangmin.top() + A;
                    pq_Sangmin.push(t);
                }
            }
        }
        else if(c == 'R'){
            for(int i = 1; i <= m; ++i){
                if(!pq_Jisu.empty() && t >= pq_Jisu.top()){
                    t += B;
                    pq_Jisu.push(t);
                }
                else if(pq_Jisu.empty()){
                    t += B;
                    pq_Jisu.push(t);
                }
                else{
                    t = pq_Jisu.top() + B;
                    pq_Jisu.push(t);
                }
            }
        }
    }

    int count = pq_Sangmin.size() + pq_Jisu.size();
    priority_queue<int, vector<int>, greater<int>> Sangmin, Jisu;
    while(!pq_Sangmin.empty() && !pq_Jisu.empty()){
        if(pq_Sangmin.top() - A > pq_Jisu.top() - B){
            Sangmin.push(count--);
            pq_Sangmin.pop();
        }
        else{
            Jisu.push(count--);
            pq_Jisu.pop();
        }
    }

    while(!pq_Sangmin.empty()){
        Sangmin.push(count--);
        pq_Sangmin.pop();
    }

    while(!pq_Jisu.empty()){
        Jisu.push(count--);
        pq_Jisu.pop();
    }

    int s = Sangmin.size(), j = Jisu.size();
    cout << s << '\n';
    for(int a = 0; a < s - 1; ++a){
        cout << Sangmin.top() << " ";
        Sangmin.pop();
    }
    cout << Sangmin.top() << '\n';
    cout << j << '\n';
        for(int b = 0; b < j - 1; ++b){
        cout << Jisu.top() << " ";
        Jisu.pop();
    }
    cout << Jisu.top();
}