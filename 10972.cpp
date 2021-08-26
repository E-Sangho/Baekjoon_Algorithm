#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int N, temp;
    cin >> N;
    vector<int> v;
    for(int i = 0; i < N; ++i) {
        cin >> temp;
        v.push_back(temp);
    }
    bool flag = next_permutation(v.begin(), v.end());
    if(flag) {
        for(int i = 0; i < N; ++i) {
            cout << v[i] << " ";
        }
    }
    else cout << -1;
}