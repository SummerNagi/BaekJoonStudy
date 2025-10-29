#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;

	int stick = 64;
	int cnt = 0;
	while (x)
	{
		if (stick > x)
			stick /= 2;
		else
		{
			x -= stick;
			cnt++;
			stick = 64;
		}
	}

	cout << cnt;
}