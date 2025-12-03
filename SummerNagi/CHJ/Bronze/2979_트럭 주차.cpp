#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	int arr[101] = {};

	for (int i = 0; i < 3; i++)
	{
		int start, end;
		cin >> start >> end;

		for (int j = start; j < end; j++)
			arr[j]++;
	}

	int sum = 0;
	for (int i = 0; i < 101; i++)
	{
		if (arr[i] == 1)
			sum += arr[i] * a;
		else if (arr[i] == 2)
			sum += arr[i] * b;
		else if (arr[i] == 3)
			sum += arr[i] * c;
	}
	cout << sum;
	return 0;
}
