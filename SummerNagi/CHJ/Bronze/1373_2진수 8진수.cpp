#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;

	cin >> s;

	int cnt = 0;
	string tmp, ans;
	for (int i = s.size() - 1; i >= 0; i--) // 뒤에서부터
	{
		tmp += s[i]; 
		cnt++;
		if (cnt == 3 || i == 0) // 2진수 세자리당 8진수의 하나임
		{
			int sum = 0;

			for (int j = 0; j < tmp.size(); j++)
				if (tmp[j] == '1')
					sum += pow(2, j);

			ans += sum + '0';

			tmp = "";
			cnt = 0;
		}
	}

	reverse(ans.begin(), ans.end());

	cout << ans;

	return 0;
}
