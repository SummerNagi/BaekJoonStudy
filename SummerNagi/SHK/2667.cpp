// #include <iostream>
// #include <vector>
// #include <queue>
// #include <set>
// #include <algorithm>
// 
// using namespace std;
// 
// struct Point
// {
// 	Point(int y, int x) : x(x), y(y) {};
// 
// 	int x;
// 	int y;
// };
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
// 	vector<vector<int>> map(N, vector<int>(N, 0));
// 	vector<vector<int>> labeledMap(N, vector<int>(N, 0));
// 	vector<int> labels;
// 
// 	for (int i = 0; i < N; i++)
// 	{
// 		string temp;
// 		cin >> temp;
// 
// 		for (int j = 0; j < N; j++)
// 		{
// 			map[i][j] = temp[j] == '0' ? 0 : 1;
// 		}
// 
// 	}
// 
// 	queue<Point> q;
// 
// 	int dx[4] = { 1,-1,0,0 };
// 	int dy[4] = { 0,0,1,-1 };
// 
// 	int count = 1;
// 
// 	for (int i = 0; i < N; i++)
// 	{
// 		for (int j = 0; j < N; j++)
// 		{
// 			if (labeledMap[i][j] == 0 && map[i][j] == 1)
// 			{
// 				q.push(Point(i, j));
// 
// 				labeledMap[i][j] = count;
// 
// 				int labelCount = 0;
// 
// 				labelCount++;
// 
// 
// 				while (!q.empty())
// 				{
// 					Point curPoint = q.front();
// 
// 					q.pop();
// 
// 					for (int k = 0; k < 4; k++)
// 					{
// 						int curY = curPoint.y + dy[k];
// 						int curX = curPoint.x + dx[k];
// 
// 						if (curY >= 0 && curY < N && curX >= 0 && curX < N)
// 						{
// 							if (map[curY][curX] == 1 && labeledMap[curY][curX] == 0)
// 							{
// 								q.push(Point(curY, curX));
// 
// 								labeledMap[curY][curX] = count;
// 
// 								labelCount++;
// 							}
// 						}
// 					}
// 				}
// 
// 				labels.emplace_back(labelCount);
// 				count++;
// 			}
// 		}
// 	}
// 
// 	cout << count - 1 << '\n';
// 
// 	sort(labels.begin(), labels.end());
// 
// 	for (int label : labels)
// 	{
// 		cout << label << '\n';
// 	}
// 
// }