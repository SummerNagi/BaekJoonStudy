#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> board(8);

	for (int i=0; i<8; i++)
		cin >> board[i];

	int cnt = 0;
	for (int i=0; i<8; i++)
	{
		for (int j=0; j<8; j++)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0)
					if (board[i][j] == 'F')
						cnt++;
			}
			else
			{
				if (j % 2 != 0)
					if (board[i][j] == 'F')
						cnt++;
			}
		}
	}

	cout << cnt;
	return 0;
}