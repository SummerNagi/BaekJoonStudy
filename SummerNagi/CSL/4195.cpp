#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int unionFind(int frd[200'001], int id)
{
	if (frd[id] == id)
		return (id);
	else
	{
		int newId = unionFind(frd, frd[id]);
		frd[id] = newId;
		return (newId);
	}
}

int b4195()
{
	cin.tie(0);
	cin.sync_with_stdio(false);
	ios_base::sync_with_stdio(false);
	int frd[200'001];
	int N = 0;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		
		int id = 0;
		unordered_map<string, int> idm;

		int M = 0;
		cin >> M;
		for (int i = 0; i < M * 2 + 1; ++i)
		{
			frd[i] = i;
		}
		for (int i = 0; i < M; ++i)
		{
			string s1 = "";
			string s2 = "";
			cin >> s1 >> s2;
			if (idm.find(s1) == idm.end())
			{
				idm[s1] = id;
				id = id + 1;
			}
			if (idm.find(s2) == idm.end())
			{
				idm[s2] = id;
				id = id + 1;
			}
			int s1_root = unionFind(frd, idm[s1]);
			int s2_root = unionFind(frd, idm[s2]);

			frd[max(s1_root, s2_root)] = min(s1_root, s2_root);
			int count = 0;
			for (int i = 0; i < id; ++i)
			{
				if (frd[i] == s1_root || frd[i] == s2_root)
				{
					count = count + 1;
				}
			}
			cout << count << '\n';
		}
	}
	return (0);
}