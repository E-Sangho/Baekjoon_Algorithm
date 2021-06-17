#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length()) return a < b;
    else return a.length() < b.length();

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<string> arr;
    string temp;
    for(int i = 0; i < N; ++i){
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end(), compare);

    for(int i = 0; i < arr.size() - 1;){
        if(arr[i] == arr[i+1]) arr.erase(arr.begin()+i);
        else ++i;
    }

    for(int i = 0; i < arr.size(); ++i){
        cout << arr[i] << '\n';
    }
}