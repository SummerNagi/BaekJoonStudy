#include <iostream>

using namespace std;

int b24723()
{
	int N = 0;
	cin >> N;

	int count = 1;
	
	for (int i = 0; i < N; ++i)
	{
		count = count * 2;
	}
	cout << count << endl;
	return (0);
}