#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, seq, ans, input;
    cin >> n >> seq;
    ans = seq;
    for(int i = 1; i < n; ++i)
    {
        cin >> input;
        seq = seq < 0 ? input : seq + input;
        ans = ans > seq ? ans : seq;
    }
    cout << ans;
    return 0;
}