#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp, first, second;
    cin >> N;
    priority_queue<int> pq_left;
    priority_queue<int, vector<int>, greater<int>> pq_right;

    cin >> first >> second;

    if(first < second){
        pq_left.push(first);
        pq_right.push(second);
    }

    else{
        pq_left.push(second);
        pq_right.push(first);
    }

    cout << first << '\n';
    cout << pq_left.top() << '\n';

    for(int n = 0; n < N - 2; ++n)
    {
        cin >> temp;
        if(pq_left.size() == pq_right.size())
        {
            if(pq_right.top() < temp)
            {
                pq_right.push(temp);
                pq_left.push(pq_right.top());
                pq_right.pop();
            }
            else pq_left.push(temp);
        }

        else if(pq_left.size() > pq_right.size())
        {
            if(temp < pq_left.top())
            {
                pq_left.push(temp);
                pq_right.push(pq_left.top());
                pq_left.pop();
            }
            else pq_right.push(temp);
        }

        else
        {
            if(pq_right.top() < temp)
            {
                pq_right.push(temp);
                pq_left.push(pq_right.top());
                pq_right.pop();
            }
            else pq_left.push(temp);
        }

        cout << pq_left.top() << '\n';
    }
    
    return 0;
}

/*
1. pq_left.size() != pq_right.size();
    1) pq_left.size() > pq_right.size();
        (1) temp < pq_left.top()
            pq_left.push(temp)
            pq_right.push(pq_left.top())
            pq_left.pop();
        (2) pq_left.top() < temp < pq_right.top()
            pq_rifht.push(temp);
        (3) pq_right.top() < temp
            pq_right.push(temp)
    2) pq_right_size() > pq_left.size();
        (1) temp < pq_left.top()
            pq_left.push(temp);
        (2) pq_left.top() < temp < pq_right.top()
            pq_left.push(temp);
        (3) pq_right.top() < temp
            pq_right.push(temp);
            pq_left.push(pq_rignt.top());
            pq_right.pop();
2. pq_right.size() = pq_left.size()
    1) temp < pq_left.top()
        pq_left.push(temp)
    2) pq_left.top() < temp < pq_right.top()
        pq_left.push(temp)
    3) pq_right.top() < temp
        pq_right.push(temp)
        pq_left.push(pq_right.top())
        pq_right.pop()    
 */ 