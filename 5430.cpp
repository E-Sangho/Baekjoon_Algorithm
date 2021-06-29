#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for(int i = 0; i < T; ++i)
    {
        string p, input;
        int n;
        cin >> p >> n >> input;
        
        int length = input.length();
        deque<int> deq;
        string temp;

        for(int j = 0; j < length; ++j)
        {
            if('0' <= input[j] && input[j] <= '9')
            {
                temp += input[j];
            }
            else if(input[j] == ',' || input[j] == ']')
            {
                if(!temp.empty())
                {
                    deq.push_back(stoi(temp));
                    temp.clear();
                }
            }
        }

        int start = 0, end = n;
        bool reverse = false, error = false;

        for(int j = 0; j < p.length(); ++j)
        {
            if(p[j] == 'R')
            {
                reverse = !reverse;
            }
            else
            {
                if(deq.empty())
                {
                    error = true;
                    break;
                }
                else if(reverse)
                {
                    deq.pop_back();
                }
                else
                {
                    deq.pop_front();
                }
            }
        }
        if(error) cout << "error\n";
        else 
        {
            cout << '[';
            if(!reverse)
            {
                while(!deq.empty())
                {
                    cout << deq.front();
                    deq.pop_front();
                    if(!deq.empty())
                        cout << ',';
                }
            }
            else
            {
                while(!deq.empty())
                {
                    cout << deq.back();
                    deq.pop_back();
                    if(!deq.empty())
                        cout << ',';
                }

            }
            cout << "]\n";
        }
    }
    return 0;
}