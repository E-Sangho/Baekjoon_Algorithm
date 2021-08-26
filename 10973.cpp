#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }   
    if(prev_permutation(arr, arr+n)) {
        for(int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
    }
    else {
        cout << -1;
    }
    return 0;
}