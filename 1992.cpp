#include <iostream>

using namespace std;

int N = 0;
int M[64][64];

void getinput()
{
    cin >> N;
    char temp;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> temp;
            M[i][j] = int(temp) - 48;
        }
    }
}

void quadtree(int x, int y, int size)
{
    int temp = M[x][y];
    bool check = true;
    for(int i = x; i < x + size; ++i){
        for(int j = y; j < y + size; ++j){
            if(temp != M[i][j]){
                check = false;
                break;
            } 
        }
    }
    if(check)
    {
        cout << temp;
    }

    else
    {
        cout << '(';
        int half = size / 2;
        quadtree(x, y, half);
        quadtree(x, y + half, half);
        quadtree(x + half, y ,half);
        quadtree(x + half, y + half , half);
        cout << ')';
    }
}

void solve()
{
    getinput();
    quadtree(0, 0, N);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}