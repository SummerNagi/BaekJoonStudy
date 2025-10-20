#include <iostream>
#include <cmath>
using namespace std;

#define MAX 295246

int visited[MAX] = {0, };
int P;

void dfs(int x)
{
	if (visited[x] == 2)
		return;

	visited[x] += 1;
	
	int result = 0;

	while (x)
	{
		result += (int)pow(x%10, P);
		x /= 10;
	}

	dfs(result);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int a;
	cin >> a >> P;

	dfs(a);

	int result = 0;

	for (int i=0; i<MAX; i++)
		if (visited[i] == 1)
			result++;

	cout << result;

	return 0;
}