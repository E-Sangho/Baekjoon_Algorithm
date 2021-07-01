#include <iostream>

using namespace std;

int N, m_one, zero, p_one;
int M[2187][2187];

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

void dc(int x, int y, int size)
{
    int temp = M[x][y];
    bool check = true;
    for(int i = x; i < x + size; ++i)
    {
        for(int j = y; j < y + size; ++j)
        {
            if(temp != M[i][j])
            {
                check = false;
                break;
            }
        }
    }

    if(check)
    {
        if(M[x][y] == -1)
        {
            ++m_one;
        }
        if(M[x][y] == 0)
        {
            ++zero;
        }
        if(M[x][y] == 1)
        {
            ++p_one;
        }
    }
    else
    {
        for(int i = 0; i < 3; ++i)
        {
            for(int j = 0; j < 3; ++j)
            {
                dc(x + i * size/3, y + j * size/3, size/3);
            }
        }
    }
}

void solve()
{
    getinput();
    dc(0,0,N);
    cout << m_one << '\n' << zero << '\n' << p_one;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}