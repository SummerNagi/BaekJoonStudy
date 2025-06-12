#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int b3020()
{
	cin.tie(0);
	cin.sync_with_stdio(false);
	ios_base::sync_with_stdio(false);

	int N = 0;
	int H = 0;
	cin >> N >> H;
	vector<int> lstup(H + 1, 0);
	vector<int> lstdown(H + 1, 0);



	for (int i = 0; i < N; i = i + 2)
	{
		int num = 0;
		cin >> num;
		lstup[num] = lstup[num] + 1;

		num = 0;
		cin >> num;
		lstdown[num] = lstdown[num] + 1;
	}

	vector<int> ansup(H + 1, 0);
	vector<int> ansdown(H + 1, 0);

	ansup[H] = lstup[H];
	for (int i = 1; H - i >= 1; ++i)
	{
		ansup[H - i] = lstup[H - i] + ansup[H - i + 1];
	}

	ansdown[1] = lstdown[H];
	for (int i = 2; i <= H; ++i)
	{
		ansdown[i] = lstdown[H - i + 1] + ansdown[i - 1];
	}

	vector<int> ans(H, 0);

	for (int i = 0; i < H; ++i)
	{
		ans[i] = ansup[i + 1] + ansdown[i + 1];
	}

	sort(ans.begin(), ans.end());

	int count = 0;
	for (int i = 0; i < H; ++i)
	{
		if (ans[i] == ans[0])
		{
			count = count + 1;
		}
		else
		{
			break ;
		}
	}
	cout << ans[0] << " " << count << '\n';
	return (0);
}