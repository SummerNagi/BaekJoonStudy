// #include <vector>
// #include <stdio.h>
// #include <deque>
// 
// using namespace std;
// 
// int a[5000010];
// 
// deque<pair<int, int>> d;
// 
// int main()
// {
// 
// 	int N, L;
// 
// 	scanf("%d %d", &N, &L);
// 
// 	for (int i = 0; i < N; i++)
// 	{
// 		scanf("%d", &a[i]);
// 	}
// 
// 	for (int i = 0; i < N; i++)
// 	{
// 		if (!d.empty() && d.front().second < i - L + 1)
// 		{
// 			d.pop_front();
// 		}
// 
// 		while (!d.empty() && a[i] < d.back().first)
// 		{
// 			d.pop_back();
// 		}
// 
// 		d.push_back(make_pair(a[i], i));
// 
// 		printf("%d ", d.front().first);
// 	}
// }