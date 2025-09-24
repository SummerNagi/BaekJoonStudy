#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int b2166()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N = 0;
  cin >> N;
  vector<pair<long long, long long>> vec(N + 1);

  for (int i = 0; i < N; ++i)
  {
    long long x = 0;
    long long y = 0;
    cin >> x >> y;
    vec[i].first = x;
    vec[i].second = y;
  }

  vec[N] = vec[0];
  long long count1 = 0;
  long long count2 = 0;
  for (int i = 0; i < N; ++i)
  {
    count1 = count1 + (vec[i].first * vec[i + 1].second);
    count2 = count2 + (vec[i].second * vec[i + 1].first);
  }

  double answer = (static_cast<double>(abs(count1 - count2)) / 2);
  cout << fixed << setprecision(1) << answer << endl;
  return (0);
}
