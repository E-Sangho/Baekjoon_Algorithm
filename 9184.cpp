#include <iostream>

using namespace std;

const int maxn = 21;

int v[maxn][maxn][maxn];

int w(int a, int b, int c)
{
    if(a <= 0 || b <= 0 || c <= 0) return 1;
    
    else if(a > 20 || b > 20 || c > 20) return w(20, 20, 20);
    
    if(!v[a][b][c]){
        if(a < b && b < c){
            v[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
        }
        else{
            v[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
        }
    }
    
    return v[a][b][c];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    while(true)
    {
        cin >> a >> b >> c;
        if(a == -1 && b == -1 && c == -1) break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
    }
}