#include <iostream>
#include <cmath>

using namespace std;

int N, blue, white;
int M[128][128];

void getinput()
{
    cin >> N;
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            cin >> M[i][j];
        }
    }
}

void quadtree(int x, int y, int size)
{
    int temp_blue = 0;

    for(int i = x; i < x + size; ++i)
    {
        for(int j = y; j < y + size; ++j)
        {
            if(M[i][j] == 1) ++temp_blue;
        }
    }
    if(temp_blue == 0)
    {
        ++white;
        return;
    }
    else if(temp_blue == size * size)
    {
        ++blue;
        return;
    }
    int half  = size / 2;
    quadtree(x, y, half);
    quadtree(x, y + half, half);
    quadtree(x + half, y, half);
    quadtree(x + half, y + half, half);

}

void solve()
{
    quadtree(0,0,N);
    cout << white << '\n' << blue << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    getinput();
    solve();

    return 0;
}