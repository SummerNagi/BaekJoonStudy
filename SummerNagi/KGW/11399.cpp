#include <iostream>
using namespace std;

int a11399()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int A[1001] = { 0 };
	int S[1001] = { 0 };

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for (int i = 1; i < N; i++)
	{
		int value = A[i];
		int j = i - 1;

		while (j >= 0 && A[j] > value)
		{
			A[j + 1] = A[j];
			j--;
		}

		A[j + 1] = value;
	}

	S[0] = A[0];
	for (int i = 1; i < N; i++)
	{
		S[i] = S[i - 1] + A[i];
	}

	int Sum = 0;
	for (int i = 0; i < N; i++) {
		Sum += S[i];
	}
	cout << Sum << "\n";

	return 0;
}
