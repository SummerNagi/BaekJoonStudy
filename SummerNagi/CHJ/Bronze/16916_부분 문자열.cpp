#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s, p;
	cin >> s >> p;

	if (strstr(s.c_str(), p.c_str()) != nullptr)
		cout << 1;
	else
		cout << 0;

	return 0;
}
