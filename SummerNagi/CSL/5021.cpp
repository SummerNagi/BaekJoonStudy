#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 0;
	int M = 0;
	cin >> N >> M;

	unordered_map<string, int> umap;
	vector<vector<string>> vec(N, vector<string>(3));


	string king = "";
	cin >> king;
	umap[king] = 0;
	int idx = 1;

	for (int i = 0; i < N; ++i)
	{
		cin >> vec[i][0] >> vec[i][1] >> vec[i][2];

		for (string& name : vec[i])
		{
			if (umap.find(name) == umap.end())
			{
				umap[name] = idx;
				idx = idx + 1;
			}
		}
	}

	vector<vector<int>> condition(idx);
	vector<int> clear(idx, 0);
	vector<double> density(idx, 0.0);
	vector<int> royalty(idx , 1);
	vector<int> temp;

	
	density[umap[king]] = 1.0;
	royalty[umap[king]] = 0;
	clear[umap[king]] = 0;
	temp.push_back(umap[king]);

	for (vector<string>& fm : vec)
	{
		int a = umap[fm[0]];
		int b = umap[fm[1]];
		int c = umap[fm[2]];


		condition[b].push_back(a);
		condition[c].push_back(a);
		clear[a] = clear[a] + 2;
	}

	unordered_map<int, string> answer;
	pair<double, string> ans = { -1.0, "" };

	for (int i = 0; i < M; ++i)
	{
		string s = "";
		cin >> s;

		if (umap.find(s) == umap.end())
		{
			ans = { 0.0, s };
		}
		else
		{
			answer[umap[s]] = s;
		}
	}

	for (int i = 1; i < idx; ++i)
	{
		if (clear[i] == 0)
		{
			temp.push_back(i);
		}
	}


	while (temp.size() != 0)
	{
		vector<int> memo;
		for (int i = 0; i < temp.size(); ++i)
		{
			int num = temp[i];
			double ds = density[num];

			if (answer.find(num) != answer.end())
			{
				if (ans.first < ds)
				{
					ans.first = ds;
					ans.second = answer[num];
				}
			}
			for (int n : condition[num])
			{
				clear[n] = clear[n] - 1;
				density[n] = (density[n] + density[num]);
				if (clear[n] == 0)
				{
					density[n] = density[n] / 2;
					memo.push_back(n);
				}
			}
		}
		temp = move(memo);
	}

	cout << ans.second << '\n';

	return (0);
}
