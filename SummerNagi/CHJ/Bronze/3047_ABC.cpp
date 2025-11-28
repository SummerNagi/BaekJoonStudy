#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[3];
	for (int i=0; i<3; i++)
		cin >> arr[i];

	sort(arr, arr+3);

	string s;
	cin >> s;

	for (const auto& i : s)
	{
		if (i == 'A')
			cout << arr[0] << ' ';
		else if (i == 'B')
			cout << arr[1] << ' ';
		else
			cout << arr[2] << ' ';
	}
	return 0;
}
