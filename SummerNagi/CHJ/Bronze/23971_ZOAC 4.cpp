#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int h, w, n, m;
	cin >> h >> w >> n >> m;

	int cnt = 0;
	for (int i = 0; i < h; i += n + 1)
		for (int j = 0; j < w; j += m + 1)
			cnt++;

	cout << cnt;
	return 0;
}
