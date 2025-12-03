#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> arr(20);
	for (int i=1; i<=20; i++)
		arr[i-1] = i;

	for (int i=0; i<10; i++)
	{
		int a, b;
		cin >> a >> b;

		reverse(arr.begin() + a-1, arr.begin() + b);
	}

	for (const auto& i : arr)
		cout << i << ' ';

	return 0;
}
