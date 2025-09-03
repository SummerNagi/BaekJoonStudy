//#include <iostream>
//#include <cmath>
//#include <string>
//#include <algorithm>
//
//
//using namespace std;
//
//int N;
//int c = 1;
//
//string num = "";
//
//bool IsDecs(string str)
//{
//	if (str.length() == 1)
//	{
//		return true;
//	}
//
//	for (int i = 0; i < str.length() - 1; i++)
//	{
//		if (str[i] <= str[i + 1])
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//void solve(int digit)
//{
//	if (digit == 1 || (num.length() > 1 && IsDecs(num)))
//	{
//		c++;
//	}
//
//	if (c == N)
//	{
//		cout << num;
//		return;
//	}
//
//	for (int i = 1; i <= 9; i++)
//	{
//		num += to_string(i);
//
//		if (IsDecs(num))
//		{
//			solve(digit + 1);
//		}
//
//		num.pop_back();
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N;
//
//	if (N == 0)
//	{
//		cout << 0;
//		return 0;
//	}
//
//	solve(0);
//}