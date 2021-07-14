#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    if(N <= 3) cout << N;
    else{
        int a = 1, b = 2, c;
        
        for(int i = 3; i <= N; ++i){
            c = (a + b) % 15746;
            a = b;
            b = c;
        }
    cout << c;
    }
    
    return 0;
}