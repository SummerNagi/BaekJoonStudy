#include <iostream>
using namespace std;

int a[5];

void print()
{
	for (const auto& i : a)
		cout << i << ' ';

	cout << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	for (int i = 0; i < 5; i++)
		cin >> a[i];

	while (1)
	{
		bool swapped = false;

		for (int i = 0; i < 4; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
				print();

				swapped = true;
			}
		}
		if (!swapped)
			break;
	}

	return 0;
}
