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

int decoding(char c)
{
	switch (c)
	{
	case 'A':
		return 0;
	case 'G':
		return 1;
	case 'C':
		return 2;
	case 'T':
		return 3;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n; string s;
	cin >> n >> s;

	char table[4][4] =
	{ {'A', 'C', 'A', 'G'},
	{'C', 'G', 'T', 'A'},
	{'A', 'T', 'C', 'G'},
	{'G', 'A', 'G', 'T'} };

	
	while (n > 1)
	{
		int first = decoding(s[n-2]);
		int second = decoding(s[n-1]);

		s[n - 2] = table[first][second];
		n--;
	}

	cout << s[0];
	return 0;
}