// #include <iostream>
// #include <map>
// 
// using namespace std;
// 
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
// 
// 	int T;
// 	cin >> T;
// 
// 	map<int, int> m;
// 
// 	for (int i = 0; i < T; i++)
// 	{
// 		int temp;
// 		cin >> temp;
// 		m[temp] = 1;
// 	}
// 
// 	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
// 	{
// 		if (it->second > 1)
// 		{
// 			for (int i = 0; i < it->second; i++)
// 			{
// 				cout << it->first << "\n";
// 			}
// 		}
// 		else
// 		{
// 			cout << it->first << "\n";
// 		}
// 	}
// 
// 
// }