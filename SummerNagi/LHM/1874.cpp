//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//// 스택 수열
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> arr(n);
//	vector<char> result;
//	bool b = true;
//
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> arr[i];
//	}
//
//	stack<int> stck;
//	int num = 1;
//
//	for (int i = 0; i < arr.size(); ++i)
//	{
//		// 현재 수열 값이 자연수보다 크면
//		if (arr[i] >= num)
//		{
//			// 1부터 현재 수열 값까지 push
//			while (arr[i] >= num)
//			{
//				stck.push(num++);
//				result.push_back('+');
//			}
//			stck.pop(); // 마지막 값 pop
//			result.push_back('-');
//		}
//		// 현재 수열 값이 자연수보다 작으면
//		else
//		{
//			// 수열 원소 꺼냄
//			int top = stck.top();
//			stck.pop();
//			
//			// 스택의 가장 위의 수가 수열 값보다 크면
//			if (top > arr[i])
//			{
//				cout << "NO";
//				b = false;
//				break;
//			}
//			else result.push_back('-');
//		}
//	}
//
//	if (b)
//	{
//		for (int i = 0; i < result.size(); ++i)
//		{
//			cout << result[i] << "\n";
//		}
//	}
//
//	return 0;
//}