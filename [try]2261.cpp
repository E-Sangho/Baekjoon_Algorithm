#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int distance(pair<int, int> a, pair<int, int> b)
{
    return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));
}

bool compare(const pair<int, int> a, const pair<int, int> b)
{
    if(a.first < b.first) return a < b;
    else if(a.first > b.first) return a > b;
    else if(a.second < b.second) return a < b;
}

int main()
{
    int n;
    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; ++i)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), compare);
    

    return 0;
}