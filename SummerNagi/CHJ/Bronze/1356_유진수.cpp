#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	vector<int> a(s.size());
	for (int i = 0; i < s.size(); i++)
		a[i] = s[i] - '0';

	bool flag = false;
	for (int i = 0; i < a.size(); i++)
	{
		long long sum1 = 1;
		for (int j = 0; j <= i; j++)
			sum1 *= a[j];

		long long sum2 = 1;
		for (int j = i + 1; j < a.size(); j++)
			sum2 *= a[j];

		if (sum1 == sum2)
			flag = true;

	}

	if (s.size() == 1)
		flag = false;

	if (flag)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
