#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Queue
{
private:
    vector<int> m_v;
public:

    void push(const int &input)
    {
        m_v.push_back(input);
    }

    int pop()
    {
        if(empty()) return -1;
        else
        {
            int temp;
            temp =  m_v.front();
            m_v.erase(m_v.begin());
            return temp;
        } 
    }

    int size()
    {
        return m_v.size();
    }

    int empty()
    {
        if(m_v.empty()) return 1;
        else return 0;
    }

    int front()
    {
        if(m_v.empty()) return -1;
        else return m_v.front();
    }

    int back()
    {
        if(m_v.empty()) return -1;
        else return m_v.back();
    }

    void order(string s_in)
    {
        if(s_in == "push")
        {
            int temp;
            cin >> temp;
            push(temp);
        }
        else if(s_in == "pop")
        {
            cout << pop() << '\n';
        }
        else if(s_in == "size")
        {
            cout << size() << '\n';
        }
        else if(s_in == "empty")
        {
            cout << empty() << '\n';
        }
        else if(s_in == "front")
        {
            cout << front() << '\n';
        }
        else if(s_in == "back")
        {
            cout << back() << '\n';
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string s_in;
    cin >> N;

    Queue q;

    for(int i = 0; i < N; ++i)
    {
        cin >> s_in;
        q.order(s_in);
    }
    return 0;
}