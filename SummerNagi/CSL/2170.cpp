#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int b2170()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N = 0;
  cin >> N;

  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> line;

  for (int i = 0; i < N; ++i)
  {
    int x = 0;
    int y = 0;
    cin >> x >> y;
    line.push({x, 1});
    line.push({y, -1});
  }
  int answer = 0;
  int balance = 0;
  bool memo = false;
  int dist = 0;
  while (!line.empty())
  {
    int flag = line.top().first;
    if (!line.empty() && flag == line.top().first)
    {
      balance += line.top().second;
      line.pop();
    }
    if (memo == false && balance > 0)
    {
      dist = flag;
      memo = true;
    }
    if (balance == 0)
    {
      memo = false;
      answer += (flag - dist);
    }
  }
  cout << answer << '\n';
  return (0);
}
