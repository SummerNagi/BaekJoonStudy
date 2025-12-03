#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int len, h, w;
	cin >> len >> h >> w;

	cout << (int)(len / sqrt(h * h + w * w) * h) << ' ';
	cout << (int)(len / sqrt(h * h + w * w) * w);
	return 0;
}
