#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, w, h;
	cin >> n >> w >> h;

	int max = sqrt(w*w + h*h);
	while (n--)
	{
		int m;
		cin >> m;

		if (m <= max)
			cout << "DA\n";
		else
			cout << "NE\n";
	}
	
	return 0;
}
