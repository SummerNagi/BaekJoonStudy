// #include <iostream>
// #include <vector>
// #include <unordered_set>
// 
// using namespace std;
// 
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
// 
// 	int N;
// 	cin >> N;
// 
// 	vector<int> fruits(N);
// 
// 	for (int i = 0; i < N; i++)
// 	{
// 		cin >> fruits[i];
// 	}
// 
// 	int front = 0;
// 	int back = N - 1;
// 
// 	int max = 0;
// 
// 	for (int i = 0; i < N; i++)
// 	{
// 		unordered_set<int> s;
// 		s.insert(fruits[i]);
// 		front = i;
// 		for (int j = i + 1; j < N; j++)
// 		{
// 			s.insert(fruits[j]);
// 
// 			if (s.size() == 3)
// 			{
// 				back = j - 1;
// 				break;
// 			}
// 		}
// 
// 		if (s.size() == 2)
// 		{
// 			back = N - 1;
// 		}
// 
// 		int length = back - front + 1;
// 		if (max < length)
// 		{
// 			max = length;
// 		}
// 	}
// 
// 	cout << max;
// 
// }
// 
// #include <iostream>
// #include <vector>
// #include <unordered_map>
// 
// using namespace std;
// 
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
// 
// 	int N;
// 	cin >> N;
// 
// 	vector<int> fruits(N);
// 
// 	bool onlyOne = true;
// 	for (int i = 0; i < N; i++)
// 	{
// 		int temp;
// 		cin >> temp;
// 		fruits[i] = temp;
// 
// 		if (i != 0 && fruits[i - 1] != temp)
// 		{
// 			onlyOne = false;
// 		}
// 	}
// 
// 	if (onlyOne == true)
// 	{
// 		cout << fruits.size();
// 		return 0;
// 	}
// 
// 	int front = 0;
// 	int idx = 0;
// 
// 	int max = 0;
// 
// 	unordered_map<int, int> m;
// 
// 	for (int back = front; back < N; back++)
// 	{
// 		m[fruits[back]]++;
// 
// 		while (m.size() > 2)
// 		{
// 			m[fruits[front]]--;
// 
// 			if (m[fruits[front]] == 0)
// 			{
// 				m.erase(fruits[front]);
// 			}
// 
// 			front++;
// 		}
// 
// 		if (m.size() == 2)
// 		{
// 			if (max < back - front + 1)
// 			{
// 				max = back - front + 1;
// 			}
// 		}
// 	}
// 
// 
// 	cout << max;
// }