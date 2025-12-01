#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[6] = {500, 100, 50, 10, 5, 1};

	int n;
	cin >> n;

	n = 1000-n;
	int cnt = 0;

	for (int i=0; i<6; i++)
	{
		while (1)
		{
			if (n >= arr[i])
			{
				n -= arr[i];
				cnt++;
			}
			else
				break;
		}
	}

	cout << cnt;
	return 0;
}
