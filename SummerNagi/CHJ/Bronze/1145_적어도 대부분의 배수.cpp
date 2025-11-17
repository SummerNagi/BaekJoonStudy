#include <iostream>
using namespace std;

int num[5];

int bforce(int n)
{
	int cnt = 0;
	for (int i=0; i<5; i++)
		if (n % num[i] == 0)
			cnt++;

	return cnt;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i=0; i<5; i++)
		cin >> num[i];

	int cnt = 1;
	while (bforce(cnt) < 3)
		cnt++;

	cout << cnt;

	return 0;
}
