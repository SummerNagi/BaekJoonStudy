#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string strExp;

	cin >> strExp;

	int temp = 0;
	int answer = 0;
	bool minusToggle = false;

	vector<string> subExp;

	stringstream ss(strExp);
	string tempStr;

	while (getline(ss, tempStr, '-'))
	{
		subExp.push_back(tempStr);
	}

	for (int i = 0; i < subExp.size(); i++)
	{
		vector<string> numArray;
		tempStr.clear();

		const string& str = subExp[i];

		stringstream ss2(str);

		while (getline(ss2, tempStr, '+'))
		{
			numArray.push_back(tempStr);
		}

		if (i == 0)
		{
			for (const string& strNum : numArray)
			{
				answer += stoi(strNum);
			}
		}
		else
		{
			for (const string& strNum : numArray)
			{
				answer -= stoi(strNum);
			}
		}
	}
	cout << answer;
}

