#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    deque<int> deq;

    for(int i = 0; i < N; ++i)
    {
        string str;
        cin >> str;
        if(str == "push_front")
        {
            int temp;
            cin >> temp;
            deq.push_front(temp);
        }
        else if(str == "push_back")
        {
            int temp;
            cin >> temp;
            deq.push_back(temp);
        }
        else if(str == "pop_front")
        {
            if(deq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << deq.front() << '\n';
                deq.pop_front();
            }
            
        }
        else if(str == "pop_back")
        {
            if(deq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << deq.back() << '\n';
                deq.pop_back();
            }
        }
        else if(str == "size")
        {
            cout << deq.size() << '\n';
        }
        else if(str == "empty")
        {
            cout << deq.empty() << '\n';
            
        }
        else if(str == "front")
        {
            if(deq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << deq.front() << '\n';
            }
        }
        else if(str == "back")
        {
            if(deq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << deq.back() << '\n';
            }
        }
    }
}