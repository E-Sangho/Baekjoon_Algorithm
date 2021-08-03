#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int L, P, V;
    int n_case = 0;
    while(cin >> L >> P >> V)
    {
        if(L == 0 && P == 0 && V == 0) break;
        int ans = 0;
        ans = (V / P) * L;
        if(V % P < L) ans += V % P;
        else ans += L;
        ++n_case;
        cout << "Case " << n_case <<": " << ans << '\n'; 
    }

    return 0;
}