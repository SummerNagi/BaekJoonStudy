#include <iostream>
#include <unordered_set>
#include <vector>
#include <numeric>

using namespace std;

class UnionFind
{

public:
	UnionFind(int n)
	{
		parent.resize(n);

		iota(parent.begin(), parent.end(), 0);
		rank.assign(n, 0);
	}

	int find(int i)
	{
		if (parent[i] == i)
		{
			return i;
		}

		parent[i] = find(parent[i]);

		return parent[i];
	}

	void unionSet(int i, int j)
	{
		int root_i = find(i);
		int root_j = find(j);

		if (root_j != root_i)
		{
			if (rank[root_i] > rank[root_j])
			{
				parent[root_j] = root_i;
			}
			else if (rank[root_i] < rank[root_j])
			{
				parent[root_i] = root_j;
			}
			else
			{
				parent[root_j] = root_i;
				rank[root_j]++;
			}
		}
	}

	bool isUnion(int i, int j)
	{
		int root_i = find(i);
		int root_j = find(j);

		return root_i == root_j;
	}

	vector<int> parent;
	vector<int> rank;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	UnionFind uf(N+1);

	for (int i = 0; i < M; i++)
	{
		int command, a, b;
		cin >> command >> a >> b;

		if (command == 1)
		{
			if (uf.isUnion(a, b))
			{
				cout << "YES" << "\n";
			}
			else
			{
				cout << "NO" << "\n";
			}
		}
		else
		{
			uf.unionSet(a, b);
		}
	}
}