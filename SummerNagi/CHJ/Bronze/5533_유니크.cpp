#include <iostream>
#include <map>
#include <vector>

using namespace std;

int n;
void chk(vector<int>& arr)
{
	map<int, int> mp;

	for (int i = 0; i < n; i++)
		mp[arr[i]]++;

	for (int i = 0; i < n; i++)
		if (mp[arr[i]] > 1)
			arr[i] = 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	vector<int> a(n);
	vector<int> b(n);
	vector<int> c(n);

	for (int i = 0; i < n; i++)
		cin >> a[i] >> b[i] >> c[i];

	chk(a);
	chk(b);
	chk(c);

	for (int i = 0; i < n; i++)
		cout << a[i] + b[i] + c[i] << '\n';

	return 0;
}
