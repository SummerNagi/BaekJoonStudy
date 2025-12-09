#include <iostream>
using namespace std;

int cnt[1001];
int cur, cntsum;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, l;
	cin >> n >> m >> l;

	while (1)
	{
		cnt[cur]++;
		cntsum++;

		if (cnt[cur] == m)
			break;

		if (cnt[cur] % 2)
			cur = (cur + l) % n;
		else
			cur = (cur - l + n) % n;
	}

	cout << cntsum - 1;

	return 0;
}
