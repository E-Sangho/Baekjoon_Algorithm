#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    vector<int> v;
    int temp = 0;
    for(int i = 0; i < N; ++i){
        cin >> temp;
        v.push_back(temp);
    }

    vector<int> copy(v);

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());





    for(int i = 0; i < N; ++i){
        int ans = lower_bound(v.begin(), v.end(), copy[i]) - v.begin();

        cout << ans << ' ';
    }
}