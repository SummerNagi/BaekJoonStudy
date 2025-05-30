#include <iostream>
#include <unordered_map>

using namespace std;

int b10816()
{
	cin.tie(0);
	cin.sync_with_stdio(false);
	ios_base::sync_with_stdio(false);

	int N = 0;
	cin >> N;
	
	unordered_map<int, int> um;

	for (int i = 0; i < N; ++i)
	{
		int num = 0;
		cin >> num;
		um[num] = um[num] + 1;
	}

	int M = 0;
	cin >> M;

	for (int i = 0; i < M; ++i)
	{
		int num = 0;
		cin >> num;
		cout << um[num] << " ";
	}

	return (0);
}