#include <iostream>
#include <climits>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int N;
int S[21][21] = { 0 };
bool visited[21] = { false };
int minDiff = INT_MAX;

void search(int idx, int cnt)
{
	if (cnt == N / 2)
	{
		int startAbility = 0;
		int linkAbility = 0;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (visited[i] && visited[j])
				{
					startAbility += S[i][j];
				}
				if (!visited[i] && !visited[j])
				{
					linkAbility += S[i][j];
				}
			}
		}

		minDiff = min(minDiff, abs(startAbility - linkAbility));
		return;
	}

	for (int i = idx; i < N; i++)
	{
		if (visited[i])
		{
			continue;
		}

		visited[i] = true;
		search(i + 1, cnt + 1);
		visited[i] = false;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> S[i][j];
		}
	}

	search(0, 0);

	cout << minDiff << endl;

	return 0;
}