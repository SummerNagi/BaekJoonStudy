#include <iostream>
#include <algorithm>

using namespace std;

int N, cnt;


int main()
{

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a[1001];
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}

	sort(a, a + N);

	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}

	return 0;
}