#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, sum = 0, score = 0, first, second;
    cin >> N;
    cin >> first;
    for(int n = 0; n < N - 1; ++n)
    {
        cin >> second;
        score += first * second;
        first += second;
    }

    cout << score << endl;
}
