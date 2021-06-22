#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void NGE(vector<int> v)
{
    int n = v.size();
    for(int i = 0; i < n; ++i)
    {
        int cnt = 0, ans = -1;
        for(int j = n - 1; j > i; --j)
        {
            if(v[i] < v[j]) ans = v[j];
        }
        cout << ans << ' ';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp = 0;
    cin >> N;
    vector<int> v;
    for(int i = 0; i < N; ++i)
    {
        cin >> temp;
        v.push_back(temp);
    }
    NGE(v);
}