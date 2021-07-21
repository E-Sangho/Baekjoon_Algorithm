#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    long long Fn[n+1];
    Fn[0] = 0;
    Fn[1] = 1;
    for(int i = 2; i <= n; ++i)
    {
        Fn[i] = Fn[i-1] + Fn[i-2];
    }
    cout << Fn[n];
    return 0;
}