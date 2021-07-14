#include <iostream>

using namespace std;

int tile[1000001];

int cal(const int &n)
{
    if(n == 1) return 1;
    else if(n == 2) return 2;
    else if(tile[n] == 0){
        tile[n] = (cal(n-1)+ cal(n-2)) % 15746;
    }
    return tile[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    cout << cal(N);

    return 0;
}


/* N = 1    1  
 * N = 2    2    
 * N = 3    3
 * N = 4    5
 * N = 5    
 * 
 */