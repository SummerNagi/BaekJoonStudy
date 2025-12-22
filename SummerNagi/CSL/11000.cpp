#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 0;
	cin >> N;
	vector<pair<int, int>> lst(N, {0, 0});

	for (pair<int, int>& p : lst)
	{
		cin >> p.first;
		cin >> p.second;
	}
	sort(lst.begin(), lst.end());
	multiset<int> st;

	for (pair<int, int>& p : lst)
	{
		multiset<int>::iterator it = st.upper_bound(p.first);
		if (it == st.begin())
		{
			st.insert(p.second);
		}
		else
		{
			st.erase(prev(it));
			st.insert(p.second);
		}
	}

	cout << st.size() << '\n';

	return (0);
}
