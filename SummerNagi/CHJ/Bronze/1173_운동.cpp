#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, m, M, T, R;
	cin >> N >> m >> M >> T >> R;

	if (M-m < T)
	{
		cout << -1;
		return 0;
	}

	int pulse = m;
	int minute = 0;
	while (1)
	{
		if (pulse + T <= M)
		{
			pulse += T;
			N--;
		}
		else
		{
			pulse -= R;
			if (pulse <m)
				pulse = m;
		}
		minute++;

		if (N == 0)
		{
			cout << minute;
			return 0;
		}
	}
}
