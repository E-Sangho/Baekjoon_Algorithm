#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> s;

    int K, input, sum = 0;
    cin >> K;

    for(int i = 0; i < K; ++i)
    {
        cin >> input;
        if(input == 0)
        { 
            sum -= s.top();
            s.pop();
        }
        else
        {
            s.push(input);
            sum += input;
        } 
    }
    cout << sum;
}