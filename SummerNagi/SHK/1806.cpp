// #include <iostream>
// #include <vector>
<<<<<<< Updated upstream
=======
// #include <climits>
>>>>>>> Stashed changes
// 
// using namespace std;
// 
// 
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
// 
// 	int N, M;
// 
// 	cin >> N >> M;
// 
<<<<<<< Updated upstream
// 	vector<long long> S(N + 1);
// 
// 	S[0] = 0;
// 
// 	for (int i = 1; i <= N; i++)
// 	{
// 		int temp;
// 		cin >> temp;
// 
// 		if (temp >= M)
// 		{
// 			cout << 1;
// 			return 0;
// 		}
// 
// 		S[i] = S[i - 1] + temp;
// 	}
// 
// 	if (S[N] < M)
// 	{
// 		cout << 0;
// 		return 0;
// 	}
// 
// 	int low = 0;
// 	int high = 1;
// 	int len = INT_MAX;
// 	bool toggle = false;
// 
// 	while (low < high)
// 	{
// 		long long section = S[high] - S[low];
// 
// 		if (section > M)
// 		{
// 			if (high - low < len)
// 			{
// 				len = high - low;
// 			}
// 			low++;
// 		}
// 		else if (section < M)
// 		{
// 			if (high < N)
// 			{
// 				high++;
// 			}
// 		}
// 		else
// 		{
// 			if (high - low < len)
// 			{
// 				len = high - low;
// 			}
// 
// 			if (high < N)
// 			{
// 				high++;
// 			}
// 		}
// 	}
// 
// 	if (len == INT_MAX)
=======
// 	vector<int> V(N);
// 
// 	int start = 0;
// 	int end = 0;
// 	int len = 100001;
// 	long long section = 0;
// 
// 	for (int i = 0; i < N; i++)
// 	{
// 		cin >> V[i];
// 
// 	}
// 
// 
// 	while (end < N)
// 	{
// 		section += V[end];
// 
// 		while (section >= M)
// 		{
// 			len = min(len, end - start + 1);
// 			section -= V[start];
// 			start++;
// 		}
// 		end++;
// 	}
// 
// 	if (len == 100001)
>>>>>>> Stashed changes
// 	{
// 		cout << 0;
// 	}
// 	else
// 	{
// 		cout << len;
// 	}
// 
<<<<<<< Updated upstream
// }
// 
// // 1 2 3 16 20
// // 0 1 3 6 22 42
=======
// }
>>>>>>> Stashed changes
