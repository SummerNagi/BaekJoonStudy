#include <iostream>
#include <vector>
using namespace std;

vector<int> board;
int n;
int cnt = 0;

bool check(int row)
{
	for (int i=0; i<row; i++)
	{
		if (board[i] == board[row])
			return false;
		if (abs(row - i) == abs(board[i] - board[row]))
			return false;
	}

	return true;
}

void backtracking(int row)
{
	if (row == n)
	{
		cnt++;
		return;
	}

	for (int i=0; i<n; i++)
	{
		board[row] = i;

		if (check(row))
			backtracking(row + 1);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	board.resize(n, 0);

	backtracking(0);

	cout << cnt;
	return 0;
}