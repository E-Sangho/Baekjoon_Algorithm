#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double N, temp, first, second;
    cin >> N;
    priority_queue<double, vector<double>, greater<double>> pq;
    for(int i = 0; i < N; ++i)
    {
        cin >> temp;
        pq.push(temp);
    }
    while(N > 1)
    {
        first = pq.top();
        pq.pop();
        second = pq.top();
        pq.pop();
        pq.push((first + second)/2);
        N--;
    }
    cout << fixed;
    cout.precision(6);
    cout << pq.top();
}