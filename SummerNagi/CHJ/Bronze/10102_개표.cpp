#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	string s;
	cin >> n >> s;

	int a(0), b(0);
	for (int i=0; i<s.size(); i++)
	{
		if (s[i] == 'A')
			a++;
		else
			b++;
	}

	if (a > b)
		cout << 'A';
	else if (a < b)
		cout << 'B';
	else
		cout << "Tie";
	return 0;
}
