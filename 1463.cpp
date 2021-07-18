#include <iostream>
#include <algorithm>

using namespace std;

int goUp(int n){
    if(n <= 1) return 0;
    else{
        return min(n % 3 + goUp(n/3) + 1, n % 2 + goUp(n/2) + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    cout << goUp(N);
    return 0;
}