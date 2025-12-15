#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, begin;
	cin >> n >> begin;

	int MAX(0), diff(0);
	
	for (int i=0; i<n-1; i++)
	{
		int num;
		cin >> num;

		if (num > begin)
		{
			diff += (num - begin);
		}
		else
		{
			MAX = max(MAX, diff);
			diff = 0;
		}

		begin = num;
	}

	MAX = max(MAX, diff);
	cout << MAX;
	return 0;
}
