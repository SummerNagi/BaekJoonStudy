#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> a1;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	a1.resize(n + m);

	for (int i = 0; i < n + m; i++)
		cin >> a1[i];

	sort(a1.begin(), a1.end());

	for (const auto& i : a1)
		cout << i << ' ';

	return 0;
}