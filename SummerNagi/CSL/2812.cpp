#include <iostream>
#include <deque>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 0;
	int K = 0;
	cin >> N >> K;

	deque<int> dque;
	cin.get();

	for (int i = 0; i < N; ++i)
	{
		int num = (cin.get() - 48);

		while (!dque.empty() && dque.back() < num && K != 0)
		{
			dque.pop_back();
			K = K - 1;
		}
		dque.push_back(num);
	}

	while (K != 0)
	{
		dque.pop_back();
		K = K - 1;
	}

	while (!dque.empty())
	{
		cout << dque.front();
		dque.pop_front();
	}

	return (0);
}
