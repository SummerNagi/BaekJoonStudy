#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

bool isPrime(int a)
{
	if (a == 2)
		return false;

	for (int i = 2; i * i <= a; i++)
		if (a % i == 0)
			return false;

	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<long long> prime;

	for (int i = 2; i <= 1000000; i++)
		if (isPrime(i))
			prime.push_back(i);

	while (n--)
	{
		long long s;
		cin >> s;

		bool flag = true;
		for (int i = 0; i < prime.size(); i++)
		{
			if (s % prime[i] == 0)
				flag = false;
		}

		if (flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}