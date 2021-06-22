#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool check_VPS(const string input)
{
    int length = input.length();
    stack<char> s;

    for(int i = 0; i < length; ++i)
    {
        if(input[i] == '(')
        {
            s.push('(');
        }

        else if(input[i] == ')')
        {
            if(s.empty()) return false;
            else s.pop();
        }
    }
    return s.empty();
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--)
    {
        string input;
        cin >> input;
        if(check_VPS(input)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}