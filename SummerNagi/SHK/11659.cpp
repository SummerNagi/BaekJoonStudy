// #include <stdio.h>
// 
// // 구간 합 배열
// int S[100001] = {};
// 
// int main()
// {
// 	int N, M, num, i, j, idx;
// 	scanf("%d%d", &N, &M);
// 
// 	for (idx = 1; idx <= N; idx++)
// 	{
// 		scanf("%d", &num);
// 		S[idx] = S[idx - 1] + num;
// 	}
// 	for (idx = 0; idx < M; idx++)
// 	{
// 		scanf("%d%d", &i, &j);
// 		printf("%d\n", S[j] - S[i - 1]);
// 	}
// }