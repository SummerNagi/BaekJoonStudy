#include <iostream>
#include <vector>

using namespace std;

vector<vector <int>> graph;	// 인접 리스트
vector<bool> visited;		// 방문 여부

void DFS(int u)
{
	visited[u] = true;

	// u에 연결된 모든 정점들 확인
	for (int v : graph[u])
	{
		// 아직 방문하지 않은 정점이면
		// 다시 DFS 시작 (재귀 호출)
		if(!visited[v]) DFS(v);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	graph.resize(n+1);
	visited.resize(n+1, false);

	for (int i = 0; i < m; ++i)
	{
		int u, v;
		cin >> u >> v;
		// 양방향
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	int connected = 0;
	
	for (int i = 1; i <= n; ++i)
	{
		if(!visited[i])
		{
			DFS(i);
			// DFS가 끝나면 하나의 연결 요소를 다 찾은 것이므로 카운트
			connected++;
		}
	}

	cout << connected << " ";

	return 0;
}