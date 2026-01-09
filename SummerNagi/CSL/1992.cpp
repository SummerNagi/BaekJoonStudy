#include <iostream>
#include <vector>
#include <functional>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 0;
	cin >> N;

	vector<string> board(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> board[i];
	}

	const int W = N + 1;
	vector<int> ps(W * W, 0);

	auto idx = [&](int r, int c) -> int {return (r * W + c);};

	for (int r = 0; r < N; ++r)
	{
		for (int c = 0; c < N; ++c)
		{
			ps[idx(r + 1, c + 1)] = ps[idx(r, c + 1)] + ps[idx(r + 1, c)] - ps[idx(r, c)] + (board[r][c] - '0');
		}
	}

	auto sum_square =
		[&](int y, int x, int n) -> int
		{
			int y2 = y + n;
			int x2 = x + n;
			return (ps[idx(y2, x2)] - ps[idx(y, x2)] - ps[idx(y2, x)] + ps[idx(y, x)]);
		};

	string out;
	out.reserve(N * N * 2);

	function<void(int, int, int)> quad =
		[&](int y, int x, int n)
		{
			int ones = sum_square(y, x, n);
			if (ones == 0)
			{
				out.push_back('0');
				return;
			}
			if (ones == n * n)
			{
				out.push_back('1');
				return;
			}

			out.push_back('(');
			int h = n / 2;

			quad(y, x, h);
			quad(y, x + h, h);
			quad(y + h, x, h);
			quad(y + h, x + h, h);
			out.push_back(')');
		};

	quad(0, 0, N);
	cout << out << '\n';

	return (0);
}
