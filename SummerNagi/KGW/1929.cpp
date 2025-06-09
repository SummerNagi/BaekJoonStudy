#include <iostream>
#include <vector>

using namespace std;

int a1929()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M, N;
	cin >> M >> N;

	vector<int> A(N + 1);

	for (int i = 2; i <= N; i++) {
		A[i] = i;
	}

	for (int i = 2; i * i <= N; i++) {
		if (A[i] == 0) continue;

		for (int j = i * 2; j <= N; j += i) {
			A[j] = 0; 
		}
	}

	for (int i = M; i <= N; i++) {
		if (A[i] != 0) {
			cout << A[i] << "\n";
		}
	}

	return 0;
}
