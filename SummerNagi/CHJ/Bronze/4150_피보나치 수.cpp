#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string sum(string x, string y)
{
	int num;
	int cry = 0;
	string res;

	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());

	while (x.size() < y.size())
		x += '0';

	while (x.size() > y.size())
		y += '0';

	for (int i=0; i<x.size(); i++)
	{
		num = (x[i] - '0' + y[i] - '0' + cry) % 10;

		res += to_string(num);

		cry = (x[i] - '0' + y[i] - '0' + cry) / 10;
	}

	if (cry != 0)
		res += to_string(cry);

	reverse(res.begin(), res.end());

	return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	string a = "0";
	string b = "1";
	string res;

	if (n==0)
		res = "0";
	if (n==1)
		res = "1";

	for (int i=2; i<=n; i++)
	{
		res = sum(a, b);
		a = b;
		b = res;
	}

	cout << res;
	return 0;
}