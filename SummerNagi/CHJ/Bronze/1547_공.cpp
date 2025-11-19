#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[4] = {9999, 1, 0, 0};

	int n;
	cin >> n;

	while (n--)
	{
		int n1, n2;
		cin>> n1 >> n2;

		if (arr[n1])
		{
			arr[n1] = 0;
			arr[n2] = 1;
			continue;
		}

		if (arr[n2])
		{
			arr[n2] = 0;
			arr[n1] = 1;
		}
	}

	bool isEmpty = true;
	for (int i=1; i<4; i++)
	{
		if (arr[i] == 1)
		{
			isEmpty = false;
			cout << i;
		}
	}

	if (isEmpty)
		cout << -1;
	return 0;
} 
