#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;

	cin >> N;
	cin >> M;

	string S;
	cin >> S;

	int answer = 0;
	int ioCount = 0;


	for (int i = 0; i < M; ++i)
	{
		if (S[i] == 'I')
		{
			if (i + 2 < M && S[i + 1] == 'O' && S[i + 2] == 'I')
			{
				ioCount++;
				i++;
			}
			else
			{
				if (ioCount >= N)
				{
					answer += (ioCount - N + 1);
				}
				ioCount = 0;
			}
		}
		else
		{
			if (ioCount >= N)
			{
				answer += (ioCount - N + 1);
			}
			ioCount = 0;
		}
	}


	if (ioCount >= N)
	{
		answer += (ioCount - N + 1);
	}

	cout << answer;

	return 0;
}