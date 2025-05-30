// #include <iostream>
// #include <vector>
// 
// using namespace std;
// 
// vector<vector<int>> HorizontalUnfold(vector<vector<int>> inPaper)
// {
// 	vector<vector<int>> paper = inPaper;
// 
// 	int width = paper[0].size();
// 	int height = paper.size();
// 
// 	vector<vector<int>> reversePaper(height, vector<int>(width));
// 
// 	for (int i = 0; i < height; i++)
// 	{
// 		for (int j = 0; j < width; j++)
// 		{
// 			reversePaper[i][j] = paper[i][width - 1 - j];
// 		}
// 	}
// 
// 	vector<vector<int>> retPaper(height, vector<int>(width * 2, 1));
// 
// 	for (int i = 0; i < height; i++)
// 	{
// 		for (int j = 0; j < width; j++)
// 		{
// 			retPaper[i][j] = paper[i][j];
// 		}
// 
// 		for (int j = width; j < 2 * width; j++)
// 		{
// 			retPaper[i][j] = reversePaper[i][j - width];
// 		}
// 	}
// 
// 	return retPaper;
// }
// 
// vector<vector<int>> VerticalUnfold(vector<vector<int>> inPaper)
// {
// 	vector<vector<int>> paper = inPaper;
// 
// 	int width = paper[0].size();
// 	int height = paper.size();
// 
// 	vector<vector<int>> reversePaper(height, vector<int>(width));
// 
// 	for (int i = 0; i < height; i++)
// 	{
// 		for (int j = 0; j < width; j++)
// 		{
// 			reversePaper[i][j] = paper[height - 1 - i][j];
// 		}
// 	}
// 	
// 	vector<vector<int>> retPaper(height * 2, vector<int>(width, 1));
// 
// 	for (int i = 0; i < height; i++)
// 	{
// 		for (int j = 0; j < width; j++)
// 		{
// 			retPaper[i][j] = paper[i][j];
// 		}
// 	}
// 	for (int i = height; i < height * 2; i++)
// 	{
// 		for (int j = 0; j < width; j++)
// 		{
// 			retPaper[i][j] = reversePaper[i - height][j];
// 		}
// 	}
// 
// 	return retPaper;
// }
// 
// void Problem(int n, int m, vector<int> inFold, vector<vector<int>> inCuts)
// {
// 	// 	int n, m;
// 	// 
// 	// 	cin >> n >> m;
// 
// 	vector<int> folds = inFold;
// 
// 	vector<vector<int>> cuts = inCuts;
// 
// 	for (int fold : folds)
// 	{
// 		if (fold == 1)
// 		{
// 			n /= 2;
// 		}
// 		else
// 		{
// 			m /= 2;
// 		}
// 	}
// 
// 	vector<vector<int>> paper(n, vector<int>(m, 1));
// 
// 	for (auto cut : cuts)
// 	{
// 		int x = cut[1];
// 		int y = cut[0];
// 		paper[y - 1][x - 1] = 0;
// 	}
// 
// 	vector<vector<int>> tempPaper = paper;
// 
// 	for (int i = folds.size() - 1; i >= 0; i--)
// 	{
// 		if (folds[i] == 1)
// 		{
// 			tempPaper = VerticalUnfold(tempPaper);
// 		}
// 		else
// 		{
// 			tempPaper = HorizontalUnfold(tempPaper);
// 		}
// 	}
// 
// 	for (int i = 0; i < tempPaper.size(); i++)
// 	{
// 		for (int j = 0; j < tempPaper[i].size(); j++)
// 		{
// 			cout << tempPaper[i][j];
// 		}
// 
// 		cout << endl;
// 	}
// 	cout << endl;
// }
// 
// int main()
// {
// 	Problem(4, 4, { 1, -1 }, { {1,1},{2,2} });
// 
// 	Problem(4, 4, { -1, -1 }, { {3,1} });
// 
// 	return (0);
// }