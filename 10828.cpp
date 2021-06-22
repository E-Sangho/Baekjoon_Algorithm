#include <iostream>
#include <string>

using namespace std;

class Stack
{
private:
    int *m_arr;
    int m_top;
    int m_size;

public:
    Stack(const int& max_size)
    {
        m_arr = new int[max_size];
        m_top = -1;
        m_size = 0;
    }

    ~Stack()
    {
        delete [] m_arr;
    }

    void push(const int &input)
    {
        m_arr[m_size] = input;
        ++m_size;
        ++m_top;
    }

    void pop()
    {
        if(empty()) cout << -1 << endl;
        else
        {
            cout << m_arr[m_size - 1] << endl;
            --m_size;
            --m_top;
        }
    }

    void top()
    {
        if(empty()) cout << -1 << endl;
        else cout << m_arr[m_size - 1] << endl;
    }

    int empty()
    {
        if(m_top < 0) return 1;
        else return 0;
    }

    void size()
    {
        cout << m_size << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    Stack stack(10000);
    string str_in;
    int push_in;
    for(int i = 0; i < N; ++i)
    {
        cin >> str_in;
        if(str_in == "push")
        {
            cin >> push_in;
            stack.push(push_in);
        }
        else if(str_in == "top") stack.top();
        else if(str_in == "size") stack.size();
        else if(str_in == "empty")
        { 
            if(stack.empty() == 1) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if(str_in == "pop") stack.pop();
    }
}