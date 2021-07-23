#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> getPi(string p)
{
    int m = p.size(), j = 0;
    vector<int> pi(m, 0);
    for(int i = 1; i < m; ++i)
    {
        while(j > 0 && p[i] != p[j]) j = pi[i-1];
        if(p[i] == p[j]) p[i] = ++j;
    }
    return pi;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, ans = 0, count = 0;
    cin >> n;
    string s;
    cin >> s;
    
    return 0;
}