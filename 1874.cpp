#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, cnt = 0;
    cin >> n;

    stack<int> s;
    vector<char> v;
    int arr[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for(int i = 1; i <= n; ++i)
    {
        s.push(i);
        v.push_back('+');
        while(!s.empty() && s.top() == arr[cnt])
        {
            s.pop();
            v.push_back('-');
            ++cnt;
        }
    }
    if(!s.empty()) cout << "NO";
    else
    {
        int length = v.size();
        for(int i = 0; i < length; ++i)
        {
            cout << v[i] << '\n';
        } 
    }
    return 0;
}