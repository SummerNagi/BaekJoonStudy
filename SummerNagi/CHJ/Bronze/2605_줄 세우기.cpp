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
	vector<int> a;
	for (int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;

		a.insert(a.begin() + num, i);
	}

	for (int i = n - 1; i >= 0; i--)
		cout << a[i] << ' ';
	cout << '\n';
	return 0;
}
