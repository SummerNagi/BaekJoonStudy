#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a11047()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;

	cin >> N >> K;

	vector<int>a(N);

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	sort(a.rbegin(), a.rend());

	int count =0;


	for (int i = 0; i < N; i++) {

		if (a[i] <= K)
		{
			count += K / a[i];
			int t = K % a[i];
			K = t;
		}
	}


	cout << count << "\n";



}