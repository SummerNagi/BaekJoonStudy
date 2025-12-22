#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<string> channel(n);
	int idx1, idx2;
	for (int i = 0; i < n; i++)
	{
		cin >> channel[i];

		if (channel[i] == "KBS1")
			idx1 = i;
		else if (channel[i] == "KBS2")
			idx2 = i;
	}

	int inorder;
	if (idx1 > idx2)
		inorder = 1;
	else
		inorder = 0;

	for (int i = 0; i < idx1; i++)
		cout << 1;
	for (int i = 0; i < idx1; i++)
		cout << 4;

	for (int i = 0; i < idx2 + inorder; i++)
		cout << 1;
	for (int i = 0; i < idx2 + inorder - 1; i++)
		cout << 4;

	return 0;
}