#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

bool rev(const int a, const int b){
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, alphabet[26]={0,}, ans = 0;
    cin >> N;
    string temp;
    for(int n = 0; n < N; ++n){
        cin >> temp;
        int len = temp.length();
        for(int j = 0; j < len; ++j){
            alphabet[temp[j]-'A'] += pow(10, len-1-j);
        }
    }

    sort(alphabet, alphabet + 26, rev);

    for(int i = 0; i < 10; ++i){
        ans += alphabet[i] * (9-i);
    }
    
    cout << ans;
}