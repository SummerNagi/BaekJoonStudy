#include <iostream>
#include <set>

using namespace std;

void playCase()
{
	multiset<int> st;
	int N = 0;
	cin >> N;
	cout << N / 2 + 1 << endl;
	int num = 0;
	cin >> num;
	st.insert(num);
	cout << *st.begin() << " ";

	for (int i = 2; i <= N; ++i)
	{
		int num = 0;
		cin >> num;
		st.insert(num);
		if (i & 1)
		{
			multiset<int>::iterator mid = st.begin();
			for (int j = 0; j < i / 2; ++j)
			{
				++mid;
			}
			cout << *mid << " ";
		}
	}
	cout << endl;
}

int b2696()
{
	int round = 0;
	cin >> round;

	for (int i = 0; i < round; ++i)
	{
		playCase();
	}

	return (0);
}