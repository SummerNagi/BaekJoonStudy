#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

struct Edge
{
  int node1 = 0;
  int node2 = 0;
  int distance = 0;
  Edge(int n1, int n2, int dist)
  {
    this->node1 = n1;
    this->node2 = n2;
    this->distance = dist;
  }
};

int b1504()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N = 0;
  int E = 0;
  cin >> N >> E;

  vector<vector<pair<int, int>>> info(N + 1);
  priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pque;
  vector<vector<int>> visit(4, vector<int>(N + 1, 2147483647));
  for (int i = 0; i < E; ++i)
  {
    int n1 = 0;
    int n2 = 0;
    int dist = 0;
    cin >> n1 >> n2 >> dist;
    info[n1].push_back({n2, dist});
    info[n2].push_back({n1, dist});
  }
  int answer = 2147483647;
  int v1 = 0;
  int v2 = 0;
  cin >> v1 >> v2;
  pque.push({0, 1, (v1 == 1 ? 1 : 0)});
  visit[(v1 == 1 ? 1 : 0)][1] = true;
  while (!pque.empty())
  {
    int p1 = 0;
    int dist = 0;
    int round = 0; 
    tie(dist, p1, round) = pque.top();
    pque.pop();

    for (pair<int, int>& part : info[p1])
    {
      int next = 0;
      int add_dist = 0;
      int p_round = round;
      tie (next, add_dist) = part;
      if (next == v1 && !(p_round & 1) && p_round != 3)
      {
        p_round += 1;
      }
      if (next == v2 && !(p_round & 2) && p_round != 3)
      {
        p_round += 2;
      }
      if (p_round == 3 && next == N)
      {
        answer = min(answer, dist + add_dist);
      }
      if (visit[p_round][next] <= dist + add_dist)
      {
        continue ;
      }
      visit[p_round][next] = dist + add_dist;
      pque.push({dist + add_dist, next, p_round});
    }
    
  }
  cout << (answer == 2147483647 ? -1 : answer) << endl;
  return (0);
}
