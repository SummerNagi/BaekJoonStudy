#include <iostream>
#include <string>
using namespace std;

int Rev(string s)
{
	string temp;

	for (int i = s.size() - 1; i >= 0; i--)
		temp += s[i];

	int num = stoi(temp);

	return num;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string x, y;
	cin >> x >> y;

	cout << Rev(to_string(Rev(x) + Rev(y)));


	return 0;
}