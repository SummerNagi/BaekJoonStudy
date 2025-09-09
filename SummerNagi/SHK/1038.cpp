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
//#include <vector>
//#include <queue>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//bool IsDecs(const string& str)
//{
//	if (str.length() == 1)
//	{
//		return true;
//	}
//
//	for (int i = 0; i < str.length() - 1; i++)
//	{
//		if (str[i] <= str[i + 1])
//		if (str[i] - '0' < str[i + 1] - '0')
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
//	return true;
//}
//
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
//	int N;
//	cin >> N;
//
//	queue<string> q;
//
//	for (int i = 0; i <= 9; i++)
//	{
//		q.push(to_string(i));
//	}
//
//	int count = 9;
//
//	if (N <= count)
//	{
//		cout << N;
//		return 0;
//	}
//
//	long long maxDecs = 9876543210;
//
//	while (!q.empty())
//	{
//		string cur = q.front();
//
//		if (stoll(cur) > maxDecs)
//		{
//			cout << -1;
//			return 0;
//		}
//
//		int lastNum = cur[cur.length() - 1] - '0';
//
//		q.pop();
//
//		for (int i = 0; i <= lastNum - 1; i++)
//		{
//			string temp = cur;
//
//			temp += to_string(i);
//
//			if (IsDecs(temp))
//			{
//				q.push(temp);
//
//				count++;
//
//				if (count == N)
//				{
//					cout << temp;
//					return 0;
//				}
//			}
//		}
//
//		if (count > N)
//		{
//			break;
//		}
//	}
//
//	cout << -1;
//}