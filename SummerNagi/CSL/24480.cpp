#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <algorithm>

using namespace std;

void dfs(const set<int>& V, unordered_map<int, vector<int>>& E, int R) {
	static vector<int> visit(V.size() + 1, 0);
	static int round = 1;
	static int depth = 1;
	visit[R] = round;
	const vector<int>& temp_Epart = E[R];
	for (int new_R : temp_Epart)
	{
		if (visit[new_R] == 0)
		{
			round = round + 1;
			depth = depth + 1;
			dfs(V, E, new_R);
			depth = depth - 1;
		}
	}
	if (depth == 1)
	{
		for (set<int>::iterator it = V.begin(); it != V.end(); ++it)
		{
			cout << visit[*it] << '\n';
		}
	}

}

int b24480()
{
	std::cin.tie(0);
	std::cin.sync_with_stdio(false);
	std::ios_base::sync_with_stdio(false);
	int N = 0; int M = 0; int R = 0;
	cin >> N >> M >> R;
	unordered_map<int, vector<int>> E;
	set<int> V;
	for (int i = 1; i <= N; ++i)
	{
		V.insert(i);
	}
	for (int i = 0; i < M; ++i)
	{
		int a = 0; int b = 0;
		cin >> a >> b;
		E[a].push_back(b);
		E[b].push_back(a);
	}
	for (unordered_map<int, vector<int>>::iterator it = E.begin(); it != E.end(); ++it)
	{
		vector<int>& temp_Epart = it->second;
		sort(temp_Epart.begin(), temp_Epart.end(), [](const int a, const int b){
			return (a > b);
		});
	}
	dfs(V, E, R);
	return (0);
}