#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num[9];
	int sum = 0;
	int a, b;

	for (int i = 0; i < 9; i++)
	{
		cin >> num[i];
		sum += num[i]; // 난쟁이의 총 합을 구한다.
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - (num[i] + num[j]) == 100) // 두 난쟁이를 제외한 나머지가 100이라면 
			{
				a = i; // 각 난쟁이의 번호 저장
				b = j;
			}
		}
	}

	for (int k = 0; k < 9; k++)
	{
		if (k == a || k == b)
			continue;
		else
			cout << num[k] << '\n';
	}

	return 0;
}
