#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N;
    cin >> N;
    queue<int> deck;

    for(int i = 1; i <= N; ++i)
    {
        deck.push(i);
    }

    while(deck.size() != 1)
    {
        deck.pop();
        deck.push(deck.front());
        deck.pop();
    }

    cout << deck.front();
    return 0;
}