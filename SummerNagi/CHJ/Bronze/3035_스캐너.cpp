#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <deque>
#include <limits.h>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int r, c, zr, zc;
	cin >> r >> c >> zr >> zc;

	vector<vector<char>> a(r, vector<char>(c));

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			cin >> a[i][j];

	vector<string> b(r);

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			for (int k = 0; k < zc; k++)
				b[i] += a[i][j];

	for (int i = 0; i < r; i++)
		for (int j = 0; j < zr; j++)
			cout << b[i] << '\n';

	return 0;
}