#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<long> sum(n);
	vector<long> count(m);
	long result = 0;

	cin >> sum[0];

	for (int i = 1; i < n; ++i)
	{
		int temp;
		cin >> temp;
		sum[i] = sum[i-1] + temp;
	}

	for (int i = 0; i < n; ++i)
	{
		int remainder = sum[i] % m;
		if (remainder == 0)
		{
			result++;
		}
		// 나머지가 값은 인덱스의 개수 세기
		count[remainder]++;
	}

	for (int i = 0; i < m; ++i)
	{
		if (count[i] > 1)
		{
			// 나머지가 같은 인덱스 중 2개를 뽑는 경우의 수를 더하기
			result = result + (count[i] * (count[i] - 1) / 2);
		}
	}

	cout << result;

	return 0;
}