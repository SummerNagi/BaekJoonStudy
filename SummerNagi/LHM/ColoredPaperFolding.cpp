//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void PaperCutting(int width, int length, vector<int> fold, vector<vector<int>> Section)
//{
//	vector<vector<int>> paper(length, vector<int>(width));
//
//	for (int i = 0; i < fold.size(); ++i)
//	{
//		if (fold[i] == -1) width = width / 2;
//		else length = length / 2;
//	}
//
//	vector<vector<int>> FoldingPaper(length, vector<int>(width));
//	
//	for (int i = 0; i < Section.size(); ++i)
//	{
//		FoldingPaper[Section[i][0]][Section[i][1]] = 0;
//	}
//
//}
//
//int main()
//{
//	PaperCutting(4, 4, { 1, -1 }, { {1,1},{2,2} });
//	PaperCutting(4, 4, { -1, -1 }, { {3,1} });
//
//	return 0;
//}
