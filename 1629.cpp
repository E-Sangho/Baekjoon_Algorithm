#include <iostream>

using namespace std;

long long power(int a, int b, int c)
{
    if(b == 0) return 1;
    long long ans = power(a, b / 2, c);
    ans = (ans * ans) % c;

    if(b % 2 == 0)
    {   
        return ans;
    }
    else
    {
        ans = (ans * a) % c;
        return ans;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C;
    cin >> A >> B >> C;
    cout << power(A,B,C);
}