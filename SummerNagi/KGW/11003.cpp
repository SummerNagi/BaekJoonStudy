#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, L;
	cin >> N >> L;
	deque<pair<int, int>> dq;


	for (int i = 0; i < N; i++)
	{
		int num = 0;
		cin >> num;

		while (!dq.empty() && dq.back().first >= num)dq.pop_back();

		dq.emplace_back(num, i);

		while (!dq.empty() && dq.front().second <= i - L)dq.pop_front();

		cout << dq.front().first << " ";
	}

	return 0;
}