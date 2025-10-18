#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;

	vector<string> myStrings;

	for (int i=0; i<s.size(); i++)
	{
		string temp;

		for (int j=i; j<s.size(); j++)
		{
			temp += s[j];
		}
		myStrings.push_back(temp);

	}

	sort(myStrings.begin(), myStrings.end());

	for (const auto& i : myStrings)
		cout << i << '\n';

	return 0;
}