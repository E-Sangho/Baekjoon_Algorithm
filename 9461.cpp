#include <iostream>

using namespace std;

int sequence[101];

int padovan(const int &n)
{
    if(n <= 3) return 1;
    else if(n <= 5) return 2;
    else if(sequence[n] == 0){
        sequence[n] = padovan(n-1) + padovan(n-5);
    }
    return sequence[n];
}

int main()
{
    int T, N;
    cin >> T;
    for(int t = 0; t < T; ++t){
        cin >> N;
        cout << padovan(N) << '\n';
    }
}