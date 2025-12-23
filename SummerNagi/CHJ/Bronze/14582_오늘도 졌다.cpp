#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int jeminis[10], startlink[10], stat;

	for (int i = 1; i <= 9; i++)
		cin >> jeminis[i];
	for (int i = 1; i <= 9; i++)
		cin >> startlink[i];

	int curJScore(0), curSScore(0);
	for (int i = 1; i <= 9; i++)
	{
		curJScore += jeminis[i];

		if (curJScore > curSScore)
			stat = 1;

		curSScore += startlink[i];
		if (curJScore < curSScore && stat == 1)
			stat = 2;
	}
	if (stat == 2)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}