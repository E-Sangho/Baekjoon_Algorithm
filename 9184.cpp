#include <iostream>
#include <vector>

using namespace std;

vector<vector<vector<int>>> v(101, vector<vector<int>>(101, vector<int>(101,0)));

int w(int a, int b, int c)
{
    if(v[a + 50][b + 50][c + 50] != 0) return v[a + 50][b + 50][c + 50];
    else if(a <= 0 || b <= 0 || c <= 0)
    {
        v[a + 50][b + 50][c + 50] = 1;
        return 1;
    }
    else if(a > 20 || b > 20 || c > 20)
    {
        v[a + 50][b + 50][c + 50] = w(20, 20, 20);
        return v[a + 50][b + 50][c + 50];
    }
    else if(a < b && b < c)
    {
        v[a + 50][b + 50][c + 50] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
        return v[a + 50][b + 50][c + 50];
    }
    else
    {
        v[a + 50][b + 50][c + 50] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
        return v[a + 50][b + 50][c + 50];
    }
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