#include <iostream>
#include <vector>

using namespace std;

void repeat(int count, vector<int>& ans, int &answer, int goal)
{
	int idx = ans.size();
	if (idx >= goal)
	{
		answer = answer + 1;
		return ;
	}
	
	int start = ans.empty() ? 0 : ans.back() + 1;
	for (int i = start; i < count; ++i)
	{
		ans.push_back(i);
		repeat(count, ans, answer, goal);
		ans.pop_back();
	}

}

int b11050()
{
	int N = 0;
	cin >> N;

	int K = 0;
	cin >> K;

	vector<int> lst(N, 0);
	vector<int> ans;
	int answer = 0;

	repeat(N, ans, answer, K);

	cout << answer << endl;
	return (0);
}