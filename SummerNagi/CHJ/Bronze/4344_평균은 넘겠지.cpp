#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		int m;
		cin >> m;

		float sum = 0;
		vector<int> scores;

		for (int i=0; i<m; i++)
		{
			int score;
			cin >> score;

			scores.push_back(score);

			sum += score;
		}

		int count = 0;
		sum /= m;

		for (int i=0; i<m; i++)
		{
			if (scores[i] > sum)
				count++;
		}

		cout << fixed;
		cout.precision(3);
		double result = (double)count / m*100;
		cout << result << "%" << '\n';
	}

	return 0;
}
