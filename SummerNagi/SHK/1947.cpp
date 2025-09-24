//#include <iostream>
//
//using namespace std;
//
//long long dp[1000001];
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	dp[1] = 0;
//	dp[2] = 1;
//
//	// N번째 사람이 자기 자신을 제외하고 다른 사람에게 선물을 주는 경우의 수 => N-1
//	// N번째 사람을 포함하여 선물 교환을 하는 경우의 수 => N번째 사람이 선물을 받은 경우 + N번쨰 사람이 선물을 못받은 경우
//	// N번째 사람이 선물을 받은 경우 => 2명을 제외하고 N-2명끼리 선물을 교환하는 경우의 수
//	// N번째 사람이 선물을 못 받은 경우 => N번째 사람만 제외하고 N-1명끼리 
//
//	for (int i = 3; i <= N; i++)
//	{
//		dp[i] = ((i - 1) * (dp[i - 2] + dp[i - 1])) % 1000000000;
//	}
//
//	cout << dp[N];
//}