#include <iostream>
#include <deque>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, count = 0, index = 0;;
	cin >> N >> M;

	deque<int> deq;

	for(int i = 1; i <= N; ++i)
	{
		deq.push_back(i);	
	}

	while(M--)
	{
		int temp;
		cin >> temp;

		for(int i = 0; i < deq.size(); ++i)
		{
			if(deq[i] == temp)
			{
				index = i;
				break;
			}
		}

		if(deq.size() - index > index)
		{
			while(deq.front() != temp)
			{
				deq.push_back(deq.front());
				deq.pop_front();
				++count;
			}
		}
		else
		{
			while(deq.front() != temp)
			{
				deq.push_front(deq.back());
				deq.pop_back();
				++count;
			}
		}
		deq.pop_front();
	}

	cout << count;
}