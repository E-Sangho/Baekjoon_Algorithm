#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp = 0, index = 0;
    cin >> N;
    stack<int> s;
    vector<int> v, ans(N, -1);
    for(int i = 0; i < N; ++i)
    {
        cin >> temp;
        v.push_back(temp);
    }
    
    s.push(0);
    for(int i = 1; i < N; ++i)
    {
        while(!s.empty() && v[s.top()] < v[i])
        {
            ans[s.top()] = v[i];
            s.pop();

        }
        s.push(i);
    }

    for(int i = 0; i < N; ++i)
    {
        cout << ans[i] << ' '; 
    }  
}
/* 
 *  stack s = {s1, s2, ... , s.top} s.t. v[s1] >= v[s2] >= ... >= v[s.top]
 *  1. v[i] <= v[s.top]  --> s = {s1, s2, ... , s.top, s[i]} s.t. v[s1] >= v[s2] >= ... >= v[s.top] >= v[input]
 *  2. v[i] >  v[s.top]  --> while(!s.empty() && v[s.top] < v[i]) ans[s.top] = v[i], s.pop()
 */ 