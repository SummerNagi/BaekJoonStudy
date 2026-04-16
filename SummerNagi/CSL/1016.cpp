#include <iostream>
#include <valarray>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long mn, mx;
	cin >> mn >> mx;

	valarray<int> varr(1, mx - mn + 1);

	for (long long i = 2; i * i <= mx; ++i)
	{
		long long num = i * i;
		long long count = mn / num;

		if (mn % num != 0)
		{
			count = count + 1;
		}

		long long start = num * count;

		for (long long s = start; s <= mx; s = s + num)
		{
			varr[s - mn] = 0;
		}
	}
	
	int answer = varr.sum();

	cout << answer << '\n';
	return (0);
}
