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
	vector<int>A(N);


	for (int i = 0; i < N; i++)
	{
		cin >> A[i];

		while (!dq.empty() && dq.back().first >= A[i])dq.pop_back();

		dq.emplace_back(A[i], i);

		while (!dq.empty() && dq.front().second <= i - L)dq.pop_front();

		cout << dq.front().first << " ";

	}

	return 0;
}