#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int b24511()
{
	cin.tie(0);
	cin.sync_with_stdio(false);
	ios_base::sync_with_stdio(false);

	int N = 0;
	cin >> N;

	vector<int> types(N, 0);
	deque<int> values;

	for (int i = 0; i < N; ++i)
	{
		cin >> types[i];
	}

	for (int i = 0; i < N; ++i)
	{
		int num = 0;
		cin >> num;

		if (types[i] == 0)
		{
			values.push_back(num);
		}
	}

	int M = 0;
	cin >> M;

	for (int i = 0; i < M; ++i)
	{
		int num = 0;
		cin >> num;
		values.push_front(num);
		cout << values.back() << " ";
		values.pop_back();
	}
	return (0);
}