#include <iostream>
#include <vector>
#include <utility>
#include <limits>

using namespace std;

void repeat(const vector<vector<int>>& board, vector<int>& visit, int start, int& answer, int round, int memo)
{
	if (round == visit.size() - 1)
	{
		answer = min(answer, memo);
		return;
	}
	for (int i = 0; i < board[start].size(); ++i)
	{
		if (visit[i] == 0 && start != i)
		{
			visit[i] = 1;
			repeat(board, visit, i, answer, round + 1, memo + board[start][i]);
			visit[i] = 0;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 0;
	int K = 0;
	cin >> N >> K;
	constexpr int INF = numeric_limits<int>::max();
	vector<vector<int>> board(N, vector<int>(N, 0));

	for (vector<int>& vec : board)
	{
		for (int& num : vec)
		{
			cin >> num;
		}
	}

	for (int cross = 0; cross < N; ++cross)
	{
		for (int start = 0; start < N; ++start)
		{
			for (int end = 0; end < N; ++end)
			{
				board[start][end] = min(board[start][end], board[start][cross] + board[cross][end]);
			}
		}
	}

	vector<int> visit(N, 0);
	visit[K] = 1;
	int answer = INF;
	repeat(board, visit, K, answer, 0, 0);

	cout << answer << '\n';

	return (0);
}
