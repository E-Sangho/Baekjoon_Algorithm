#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    int n =  s.length(), i = 0, number = 0, ans = 0;
    char sign;

    // get first number
    while('0' <= s[i]  && s[i] <= '9')
    {
        number = number * 10 + (s[i] - '0');
        ++i;
    }
    ans = number;
    number = 0;
    while(i < n)
    {

        if(s[i] == '+')
        {
            if(sign == '-');
            else sign = '+';
            ++i;
        }

        else if(s[i] == '-')
        {
            sign = '-';
            ++i;
        }

        while('0' <= s[i]  && s[i] <= '9')
        {
            number = number * 10 + (s[i] - '0');
            ++i;
        }

        if(sign == '+')
        {
            ans = ans + number;
            number = 0;
        }

        else if(sign == '-')
        {
            ans =  ans - number;
            number = 0;
        }
    }
    cout << ans;
    return 0;
}