#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool check_balance(const string &str)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<char> s;
    int length = str.length();
    for(int i = 0; i < length; ++i)
    {
        if(str[i] == '(')
        {
            s.push('(');
        }
        else if(str[i] == '[')
        {
            s.push('[');
        }
        else if(str[i] == ')')
        {
            if(!s.empty() && s.top() == '(') s.pop();
            else return false;
        }
        else if(str[i] == ']')
        {
            if(!s.empty() && s.top() =='[') s.pop();
            else return false;
        }
    }
    return s.empty();
}
int main()
{
    while(1)
    {
        string str;
        getline(cin, str);
        if(str[0] == '.') break;
        if(check_balance(str)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}